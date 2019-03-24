#include <stdio.h>

int plus1();
int plus2();

main()
{
	int i;

	i=plus1();
	
	printf("3+4=%d \n",i);

	printf("7+8=%d \n", plus2());
}

int plus1()
{
	return 3+4;
}

int plus2()
{
	int i=7+8;

	return i;
}
