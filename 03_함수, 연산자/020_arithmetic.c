#include <stdio.h>

main()
{
	int a,b;

	a=21,b=10;

	printf("a = %d, b = %d \n", a, b);
	printf("ë§ì\t %d\n",a+b);
	printf("ëºì\t %d\n",a-b);
	printf("ê³±ì\t %d\n",a*b);
	printf("ëëì\t %d\n",a/b);
	printf("ëë¨¸ì§\t %d\n",a%b);

	printf("+1\t %d %d\n",++a, b++);
	printf("-1\t %d %d\n",--a, b--);
	printf("a=%d b=%d \n", a,b);
}
