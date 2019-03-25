//calc.out 프로그램을 실행시켜 보고 최대한 비슷하게 만들어라

#include <stdio.h>
int D(int n1, int n2);
int B(int n1, int n2);
int G(int n1, int n2);
int N(int n1, int n2);
int J(int n1, int n2);

main()
{
	int n1, n2, e, r, c;


	for(e=0;e!=-1; )
	{

		system("clear");			

		printf("계산 순서 <숫자 1 입력> <숫자 2 입력> <연산 선택> <답 출력>\n\n");
	
		printf("숫자 입력\n > ");
		scanf("%d", &n1);getchar();
	
		printf("숫자 입력\n > ");
		scanf("%d", &n2);getchar();
	
		printf("연산 선택 < 덧샘:1 / 뺄셈:2 / 곱셈:3 / 나눗셈:4 / 제곱:5 >\n > ");
		scanf("%d", &e);getchar();
	
		switch (e)
		{	
			case 1:
				r=D(n1,n2);break;
			case 2:
				r=B(n1,n2);break;
			case 3:
				r=G(n1,n2);break;
			case 4:
				N(n1,n2);break;
			case 5:
				r=J(n1,n2);break;
			default:
				printf("잘못된 입력입니다.\n\n"); 
				e=0;break;
	
		}
	
		if(e==0)
			continue;

		else if(e!=4)
			printf("= %d\n\n", r);

	printf("종료 : 1 / 다시 : 2  > ");
	scanf("%d", &c);getchar();

	if(c==1)
		e=-1;

	}

	printf("계산기를 종료합니다\n\n");
}

int D(int n1, int n2)
{
	printf("%d + %d ", n1,n2);
	return n1+n2;
}

int B(int n1, int n2)
{
	printf("%d - %d ",n1,n2);
	return n1-n2;
}

int G(int n1, int n2)
{
	printf("%d X %d ",n1,n2);
	return n1*n2;
}

int N(int n1, int n2)
{
	printf("%d / %d = %d···%d\n", n1, n2, (n1-(n1%n2))/n2, n1%n2);
}

int J(int n1, int n2)
{
	int c,r;
	
	r=1;

	printf("%d^%d ", n1,n2);

	for(c=0; c!=n2; c++)
	{
		r*=n1;
	}

	return r;
}