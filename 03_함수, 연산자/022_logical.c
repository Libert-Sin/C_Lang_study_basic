#include <stdio.h>

main()
{
	int a=10, b=12;

	printf("a<=b && a=b\t => %d \n",(a<=b)&&(a==b));
	printf("a<=b || a=b\t => %d \n",(a<=b)||(a==b));
	printf("a<=b !  \t => %d \n", !(a<=b));


}
 
