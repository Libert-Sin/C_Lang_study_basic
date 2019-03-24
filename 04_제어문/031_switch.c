#include <stdio.h>

main()
{
	int i;

	printf("\n1~5 ì¤ íë : ");
	scanf("%d", &i);

	switch (i)
	{
		case 1:
			printf("One\n");
		case 2:
			printf("Two\n");
		case 3:
			printf("Three\n");
		case 4:
			printf("Four\n");
		case 5:
			printf("Five\n");
		default:
			printf("err\n");
	}

	printf("The End\n");
}
