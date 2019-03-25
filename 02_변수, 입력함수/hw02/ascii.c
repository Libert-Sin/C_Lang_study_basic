#include <stdio.h>

main()
{
	system("clear");


	char c;

	printf("하나만 써라\n >");
	scanf("%c", &c);

	system("clear");
	printf("\"%c\"의 ASCII코드는 \"%d\" 다.\n", c,c);

	getchar();getchar();
}