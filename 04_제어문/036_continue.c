#include <stdio.h>

main()
{
	int c,n;


	printf("1~100사이 N의 배수 \n N = ");
	scanf("%d", &n);


	for(c=1;c<=100;c++)
	{
		printf("%d\n", c);

		if(c%n!=0)
		{	continue;}

		printf("%d의 배수 \t %d \n",n,c);
	}
}