#include <stdio.h>

main()
{
	double arr[4];
	int i;

	for(i=0;i<4;i++)
		printf("arr[%d] : %u\n", i, &arr[i]);
}