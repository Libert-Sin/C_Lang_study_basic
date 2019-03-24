#include <stdio.h>

main()
{
	int i;
	float f;
	double d;

	i=1111.1;
	f=1111.1;
	d=1111.1;

	printf("%d %d %d\n",i,f,d);
	printf("%f %f %f\n",i,f,d);

	printf("\nint = %d\n",sizeof(int));
	printf("short int = %d\n",sizeof(short int));
	printf("long int = %d\n",sizeof(long int));
	printf("unsigned int = %d\n\n",sizeof(unsigned int));

	printf("float = %d\n",sizeof(float));
	printf("double = %d\n",sizeof(double));
	printf("long double = %d\n",sizeof(double));
}
