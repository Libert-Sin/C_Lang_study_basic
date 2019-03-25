#include <stdio.h>

main()
{
	int i;

	printf("\n1~5 중 하나 : ");
	scanf("%d", &i);

	switch (i)
	{
		case 1:
			printf("One\n");
			break;
		case 2:
			printf("Two\n");
                        break;
		case 3:
			printf("Three\n");
                        break;
		case 4:
			printf("Four\n");
                        break;
		case 5:
			printf("Five\n");
                        break;
		default:
			printf("err\n");
                        break;
	}

	printf("The End\n");
}