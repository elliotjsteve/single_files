#include<stdio.h>
//#include<stdlib.h>
#include<string.h>

int
main(int argc, char *argv[])
{
	int nflag;
	
	if (*++argv && !strcmp(*argv, "-n")) {
			*++argv;
			nflag=1;
			}
	else {
			nflag=0;
			}
//	printf("nflag is %d\n", nflag);	
	while(*argv)
	{
		printf("%s", *argv);

		if(*++argv) {
			printf(" ");
		}
	}

	if(!nflag) {
		printf("\n");
//		exit(0);
	}
}
