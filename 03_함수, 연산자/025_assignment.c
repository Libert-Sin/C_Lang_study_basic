#include <stdio.h>

main()
{
	int a=3, b=2;

	a+=b;
	printf("a+=b => a = %d \n", a);

	a=3, b=2;
	a-=b;
	printf("a-=b => a = %d \n", a);

	a=3, b=2;
	a*=b;
	printf("a*=b => a= %d", a);

	a=3, b=2;
	a/=b;
	printf("a/=b => a= %d", a);

	a=3, b=2;
	a%=b;
	printf("a%=b => a= %d", a);

	printf("\n----------------------------------\n");

	a=3, b=2;
	a>>=b;
	printf("a>>=b => a= %d", a);

	a=3, b=2;
	a<<=b;
	printf("a<<=b => a= %d", a);

	printf("\n----------------------------------\n");

	a=3, b=2;
	a&=b;
	printf("a&=b => a= %d", a);

	a=3, b=2;
	a|=b;
	printf("a|=b => a= %d", a);

	a=3, b=2;
	a^=b;
	printf("a^=b => a= %d", a);


}
 
