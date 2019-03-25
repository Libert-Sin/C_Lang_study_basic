#include <stdio.h>

main()
{
	int i,j,k,c;

	i=1;
	j=1;
	c=1;

	printf("피보나치 수열\n");

	do
	{
		printf("%d\t",c);
		k=i+j;

                printf("%d\n",i);
                c++;
                i=j;
                j=k;
	}while(c<=50);

	printf("%d\n",k);
	
}