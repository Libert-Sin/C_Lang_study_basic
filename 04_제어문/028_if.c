#include <stdio.h>

main()
{
	int i;

	printf("\nnumber -> ");
	scanf("%d", &i);

	if(i<0)
	{
		i*=-1;	
	}

	printf("절대값 : %d\n", i);

}