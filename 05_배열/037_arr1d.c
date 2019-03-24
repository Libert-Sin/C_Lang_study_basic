#include <stdio.h>

main()
{
	int i;
	int arr[5]={1,2,3,5,8};

	for(i=0;i<5;i++)
		printf("%d ", arr[i]);

	printf("\n");



	printf("ì«ì 5ê° ìë ¥ : ");

	for(i=0;i<5;i++)
		scanf("%d", &arr[i]);

	printf("ìë ¥í ì«ìë \n > ");
	
	for(i=0;i<5;i++)
		printf("%d ", arr[i]);



	printf("\n");

}
