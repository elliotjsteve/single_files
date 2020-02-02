#include <stdio.h>

int main()
{
	char array[10] = "madhuvamsi";
//	scanf("%s", array);
//  printf("\n%s\n", name);
	int i = 0;
	while (array[i] != '0'){

		printf("%c ",array[i++]);
	}
	return 0;
}
