#include <stdio.h>

main()
{
	int i1,i2,i3;
	int arr[5][5];

//배열 초기화
	for(i1=0;i1<5;i1++)
	{
		for(i2=0;i2<5;i2++)
				arr[i1][i2]=0;
	}


//표 출력
	printf("\n\n  O O X Y Z\n  O O X Y Z\n  X X X Y Z\n  Y Y Y Y Z\n  Z Z Z Z Z\n\n");

//입력
	printf("숫자 4개 입력 : ");

	for(i1=0;i1<2;i1++)
	{
		for(i2=0;i2<2;i2++)
				scanf("%d", &arr[i1][i2]);getchar();
	}

//입력 정보 출력
	for(i1=0;i1<2;i1++)
	{
		printf("  ");
		for(i2=0;i2<2;i2++)
				printf("%d ", arr[i1][i2]);

		printf("0 0 0\n");
	}

	printf("  0 0 0 0 0\n  0 0 0 0 0\n  0 0 0 0 0\n\n\n");

//1차 - 3행열  계산
	for(i1=0;i1<2;i1++)
	{
		for(i2=0;i2<2;i2++)
		{
				arr[i1][2]+=arr[i1][i2];
				arr[2][i2]+=arr[i1][i2];
				arr[2][2]+=arr[i1][i2];
		}

	}

//1차 출력
	for(i1=0;i1<3;i1++)
	{
		printf("  ");
		for(i2=0;i2<3;i2++)
				printf("%d ", arr[i1][i2]);

		printf("0 0\n");
	}

	printf("  0 0 0 0 0\n  0 0 0 0 0\n\n\n");

//2차 - 4행열  계산
	for(i1=0;i1<3;i1++)
	{
		for(i2=0;i2<3;i2++)
		{
				arr[i1][3]+=arr[i1][i2];
				arr[3][i2]+=arr[i1][i2];
				arr[3][3]+=arr[i1][i2];
		}

	}

//2차 출력
	for(i1=0;i1<4;i1++)
	{
		printf("  ");
		for(i2=0;i2<4;i2++)
				printf("%d ", arr[i1][i2]);

		printf("0 \n");
	}

	printf("  0 0 0 0 0\n\n\n");

//3차 - 5행열  계산
	for(i1=0;i1<4;i1++)
	{
		for(i2=0;i2<4;i2++)
		{
				arr[i1][4]+=arr[i1][i2];
				arr[4][i2]+=arr[i1][i2];
				arr[4][4]+=arr[i1][i2];
		}

	}

//3차 출력
	for(i1=0;i1<5;i1++)
	{
		printf("  ");
		for(i2=0;i2<5;i2++)
				printf("%d ", arr[i1][i2]);

		printf("\n");
	}

	printf("\n\n\n");

}