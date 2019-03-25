#include <stdio.h>

main()
{
	int i;
	int arr[5]={1,2,3,5,8};

	for(i=0;i<5;i++)
		printf("%d ", arr[i]);

	printf("\n");



	printf("숫자 5개 입력 : ");

	for(i=0;i<5;i++)
		scanf("%d", &arr[i]);

	printf("입력한 숫자는 \n > ");
	
	for(i=0;i<5;i++)
		printf("%d ", arr[i]);



	printf("\n");

}