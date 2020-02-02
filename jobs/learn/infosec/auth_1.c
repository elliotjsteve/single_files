// This Piece of Code Provides Protection against information theft.

#include<stdio.h>
#include<string.h>

#define ONE 1

int
main(){

//All variables and constants

	char password[]	=	"madhuvamsi";
	char in_phrase[15];
// Scanf password.
	printf("Password: ");
	scanf("%s", in_phrase);
// Until the password is a match:
	while (strcmp(password, in_phrase)){

		printf("You Failed, Try Again\n");
		printf("Password: ");
		scanf("%s", in_phrase);
	}	

	printf("SUCCESS\n");
	printf("TOP_SECRET: MADHU IS A GENIUS\n");

}

