#include <stdio.h>

main()
{
	int i,j,k,c;

	i=1;
	j=1;

	printf("피보나치 수열\n");


	for(c=1; c<=50; c++)
	{
		printf("%d\t",c);
		k=i+j;

		printf("%d\n",i);

		i=j;
		j=k;
	}

	printf("%d\n",k);
	
}