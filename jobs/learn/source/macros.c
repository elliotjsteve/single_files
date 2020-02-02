#include<stdio.h>

int
main()
{
	printf("it's %dth line \n", __LINE__);
	printf("it's %s now\n", __TIME__);
	printf("this is %s\n", __FILE__);
	printf("the date is %s\n", __DATE__);
	printf("the function is %s\n", __func__);
}
