#include <stdio.h>

int plus(int n1, int n2);

main()
{
	int r;

	r=plus(3,4);

	printf("= %d \n",r);
}

int plus(int n1, int n2)
{
	printf("%d + %d ",n1,n2);

	return n1+n2;
}
