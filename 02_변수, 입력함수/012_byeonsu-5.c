#include <stdio.h>
#include <string.h>

main()
{
	char str[4];
	strcpy(str,"abc");

	printf("%s \n", str);

	strcpy(str,"zxc");
	printf("%s \n",str);

}
