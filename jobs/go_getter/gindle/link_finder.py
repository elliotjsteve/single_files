#!/usr/bin/env python3

import urllib.parse

import requests

import bs4

query=input('Name of the Book: ')

query=urllib.parse.quote(query)

search_link="http://www.libgen.is/search.php?req="

search_link+=query

search_link+="&lg_topic=libgen&open=0&view=simple&res=25&phrase=1&column=def"

print(search_link)

home = "Users/elliot/custom_tools"
author_num=1

title_num=2

publishing_press_num=3

year_num=4

pages_num=5

language_num=6

size_num=7

format_num=8

link_num=9
print('search_page retrieval: ')
page=requests.get(search_link)

page.raise_for_status()

print(' ----SUCCESS-----')

print('\nScraping the search_page now')

all_elements=bs4.BeautifulSoup(page.text,features="html.parser")

books=all_elements.select('tr[valign="top"]')

book_elements=[]

#Starting from 1 because the zeroth element is not a book

for book in books:

	book_elements.append(book.select('td'))

print('Available Books for your search: ')

i=-1

for b in book_elements: 

	i=i+1
	print(f"\n{i} ------------------")
	print(b[title_num].text)
	print(b[author_num].text)
	print(b[format_num].text)
	print(b[language_num].text)
	print(b[size_num].text)
	print(b[year_num].text)

book_num=int(input('Enter book_num: '))

a_tag=book_elements[book_num][link_num].select('a')

download_page=a_tag[0].get('href')
print('download_page retrieval: ')
dpage=requests.get(download_page)

dpage.raise_for_status()

print(' SUCCESS')

print('starting download now')

all_things=bs4.BeautifulSoup(dpage.text,features="html.parser")

main_link=all_things.select('h2 a')
file_name=f"{home}/load.txt"

with open(file_name,'w') as file:

	file.write(f"{urllib.parse.urlparse(download_page).netloc}{main_link[0].get('href')}")


#for book in books:
#	print(book[format_num])
