#include <stdio.h>

main()
{
	int arr[5]={10,20,30,40,50};

	int *ptr;
	int i;


	ptr=arr;

	for(i=0;i<5;i++)
	{
                printf("%u\n", ptr);
		printf("%d\n\n", *ptr);
		*ptr++;
	}
}