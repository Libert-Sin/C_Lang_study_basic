#include<stdio.h>

main()
{
	int i;
	int *ptr;

	i=10;
	ptr=&i;
	(*ptr)++;

	printf("%d\n", i);
}