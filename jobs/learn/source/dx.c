#include<stdio.h>

void
flag_check(int *flag_1, int *flag_2, char c_line[]){
	
	switch(c_line[1]){
		
		case 'd':
			
			*flag_1 = 1;
			*flag_2 = 0;

		case 'x':

			*flag_2 = 1;
			*flag_1 = 0;

		default :
// same as case 'x'			

			*flag_1 = 0;
			*flag_2 = 1;
}
}

// Command Line argument specifies the format to be converted to

int
main(int argc, char *argv[]){

	int d_flag;
	int x_flag;
	char flag = argv[1];
//	flag_check(&d_flag, &x_flag, argv[1]);
//	printf("d_flag is %d\nx_flag is %d\n", d_flag, x_flag);
	printf("The flag is %c\n", flag);
}
