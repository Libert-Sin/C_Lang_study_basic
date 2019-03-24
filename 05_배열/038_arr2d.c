#include <stdio.h>

main()
{
	int i1,i2,i3;
	int arr[5][5];

//ë°°ì´ ì´ê¸°í
	for(i1=0;i1<5;i1++)
	{
		for(i2=0;i2<5;i2++)
				arr[i1][i2]=0;
	}


//í ì¶ë ¥
	printf("\n\n  O O X Y Z\n  O O X Y Z\n  X X X Y Z\n  Y Y Y Y Z\n  Z Z Z Z Z\n\n");

//ìë ¥
	printf("ì«ì 4ê° ìë ¥ : ");

	for(i1=0;i1<2;i1++)
	{
		for(i2=0;i2<2;i2++)
				scanf("%d", &arr[i1][i2]);getchar();
	}

//ìë ¥ ì ë³´ ì¶ë ¥
	for(i1=0;i1<2;i1++)
	{
		printf("  ");
		for(i2=0;i2<2;i2++)
				printf("%d ", arr[i1][i2]);

		printf("0 0 0\n");
	}

	printf("  0 0 0 0 0\n  0 0 0 0 0\n  0 0 0 0 0\n\n\n");

//1ì°¨ - 3íì´  ê³ì°
	for(i1=0;i1<2;i1++)
	{
		for(i2=0;i2<2;i2++)
		{
				arr[i1][2]+=arr[i1][i2];
				arr[2][i2]+=arr[i1][i2];
				arr[2][2]+=arr[i1][i2];
		}

	}

//1ì°¨ ì¶ë ¥
	for(i1=0;i1<3;i1++)
	{
		printf("  ");
		for(i2=0;i2<3;i2++)
				printf("%d ", arr[i1][i2]);

		printf("0 0\n");
	}

	printf("  0 0 0 0 0\n  0 0 0 0 0\n\n\n");

//2ì°¨ - 4íì´  ê³ì°
	for(i1=0;i1<3;i1++)
	{
		for(i2=0;i2<3;i2++)
		{
				arr[i1][3]+=arr[i1][i2];
				arr[3][i2]+=arr[i1][i2];
				arr[3][3]+=arr[i1][i2];
		}

	}

//2ì°¨ ì¶ë ¥
	for(i1=0;i1<4;i1++)
	{
		printf("  ");
		for(i2=0;i2<4;i2++)
				printf("%d ", arr[i1][i2]);

		printf("0 \n");
	}

	printf("  0 0 0 0 0\n\n\n");

//3ì°¨ - 5íì´  ê³ì°
	for(i1=0;i1<4;i1++)
	{
		for(i2=0;i2<4;i2++)
		{
				arr[i1][4]+=arr[i1][i2];
				arr[4][i2]+=arr[i1][i2];
				arr[4][4]+=arr[i1][i2];
		}

	}

//3ì°¨ ì¶ë ¥
	for(i1=0;i1<5;i1++)
	{
		printf("  ");
		for(i2=0;i2<5;i2++)
				printf("%d ", arr[i1][i2]);

		printf("\n");
	}

	printf("\n\n\n");

}
