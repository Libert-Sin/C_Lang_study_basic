#include <stdio.h>

main()
{
	int c,n;


	printf("1~100ì¬ì´ Nì ë°°ì \n N = ");
	scanf("%d", &n);


	for(c=1;c<=100;c++)
	{
		printf("%d\n", c);

		if(c%n!=0)
		{	continue;}

		printf("%dì ë°°ì \t %d \n",n,c);
	}
}
