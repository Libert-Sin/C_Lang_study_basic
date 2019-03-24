#include <stdio.h>

main()
{
	int i,j,k,c;

	i=1;
	j=1;
	c=1;

	printf("í¼ë³´ëì¹ ìì´\n");

	while(c<=50)
	{
		printf("%d\t",c);
	
		k=i+j;

		printf("%d\n",i);
		c++;
		i=j;
		j=k;
	}

	printf("%d\n",k);
	
}
