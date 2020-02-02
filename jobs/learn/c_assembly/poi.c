#include<stdio.h>

int
main(){

	int x = 0;
	int y;
	int *p;
	p = &x;
	y = *p;
	printf("x is %d\ny is %d\n", x, y);
	x = 1;
	printf("x is %d\ny is %d\n", x, y);
}
