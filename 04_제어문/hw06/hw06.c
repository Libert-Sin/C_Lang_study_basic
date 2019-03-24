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

		printf("ê³ì° ìì <ì«ì 1 ìë ¥> <ì«ì 2 ìë ¥> <ì°ì° ì í> <ëµ ì¶ë ¥>\n\n");
	
		printf("ì«ì ìë ¥\n > ");
		scanf("%d", &n1);getchar();
	
		printf("ì«ì ìë ¥\n > ");
		scanf("%d", &n2);getchar();
	
		printf("ì°ì° ì í < ë§ì:1 / ëºì:2 / ê³±ì:3 / ëëì:4 / ì ê³±:5 >\n > ");
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
				printf("ìëª»ë ìë ¥ìëë¤.\n\n"); 
				e=0;break;
	
		}
	
		if(e==0)
			continue;

		else if(e!=4)
			printf("= %d\n\n", r);

	printf("ì¢ë£ : 1 / ë¤ì : 2  > ");
	scanf("%d", &c);getchar();

	if(c==1)
		e=-1;

	}

	printf("ê³ì°ê¸°ë¥¼ ì¢ë£í©ëë¤\n\n");
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
	printf("%d / %d = %dÂ·Â·Â·%d\n", n1, n2, (n1-(n1%n2))/n2, n1%n2);
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
