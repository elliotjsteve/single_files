#include<stdio.h>

void return_input(void){

	char array[30];
	int i = -1;
	while (i++ != 500){

		printf("%x\t", array[i]);
	}
	gets(array);
	printf("\n\n%s\n", array);
}

int
main(){

	return_input();
	return 0;
}
