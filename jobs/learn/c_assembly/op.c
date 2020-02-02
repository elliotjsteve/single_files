#include<stdio.h>

int main() {
	
	int a = 6;
	int b = a;
	int c = a++;
	int d = ++b;
	printf("c is %d, d is %d", c, d);
}
