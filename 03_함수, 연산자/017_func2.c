#include <stdio.h>

func();

main()
{
	printf("before\n");
	func();
	printf("after\n");
}

func()
{
	printf("anyway....\n");
}
