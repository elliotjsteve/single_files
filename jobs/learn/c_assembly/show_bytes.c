#include<stdio.h>

typedef short int *byte_pointer;

void
show_bytes(byte_pointer start, size_t len){
	
	int I = 0;
	for ( I = 0; I < len ; I++){
		
		printf(" %.2x", start[ I ]);
	}
	printf("\n");
}

void
show_int(int x){

	show_bytes((byte_pointer) &x , sizeof(int));
}

void
show_float(float x){

	show_bytes((byte_pointer) &x , sizeof(float));
}

void
show_pointer(void *x){

	show_bytes((byte_pointer) &x , sizeof(void *));
}

int
main(){

	int m = 5;
	float n = 1;
	void *c = &m;

	show_int(m);
	show_float(n);
	show_pointer(c);
}
