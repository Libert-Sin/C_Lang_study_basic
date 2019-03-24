#include <stdio.h>

main()
{
	char *str;
	str="Go To Hell!!";


        printf("1. %s \n", str);


	for(;*str;str++)
	{
		printf("%s\n",str);
	}

	printf("3. %s \n", str);

}
