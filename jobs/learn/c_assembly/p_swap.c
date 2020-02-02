#include<stdio.h>

void swap(int *a , int *b){
	
	printf("step 1: a IS %d\tb IS %x\n", *a, *b);
	*a = *a ^ *b;
	printf("step 2: a IS %x\tb IS %x\n", *a, *b);
	*b = *a ^ *b;
	printf("step 3: a IS %x\tb IS %x\n", *a, *b);
	*a = *a ^ *b;
	printf("step 4: a IS %x\tb IS %x\n", *a, *b);
}

int
main(){

	int x = 1;
	int y = 2;
//	printf("MAIN L\n");
	printf("BEFORE: X IS %d\tY IS %d\n", x, y);
	swap(&x , &y);
	printf("AFTER : X IS %d\tY IS %d\n", x, y);
}
