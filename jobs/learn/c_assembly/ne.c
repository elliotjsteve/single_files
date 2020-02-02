#include<stdio.h>

int
main(int argc, char *argv[])
{
	if (!strcmp(*++argv, "n")){
		printf("1");}
	else{
		printf("0");}
}
