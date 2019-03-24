//Arithmetic.out 프로그램을 실행시켜 보고 최대한 비슷하게 만들어라

#include <stdio.h>

float Plus (int n1, int n2);
float Minus (int n1, int n2);
float Multip (int n1, int n2);
float Divide (int n1, int n2);
int Relation(float n1, float n2);

main()
{
	int i, j;

	int k, l;
	
	float r1,r2;	

	printf("\nì²«ë²ì§¸ ì°ì°(m1)ì ì¬ì©í  ì 2ê° (ëìì¼ë¡ êµ¬ë¶) : ");
	scanf("%d %d", &i, &j);

	printf("\nëë²ì§¸ ì°ì°(m2)ì ì¬ì©í  ì 2ê° (ëìì¼ë¡ êµ¬ë¶) : ");
	scanf("%d %d", &k, &l);

	printf("\n Plus \n");
	
	r1=Plus(i,j);
	r2=Plus(k,l);

	printf("m%d ì´ ë í¬ê±°ë ê°ì.\n\n", Relation(r1,r2));

	
	printf("\n Minus \n");

        r1=Minus(i,j);
        r2=Minus(k,l);

        printf("m%d ì´ ë í¬ê±°ë ê°ì.\n\n", Relation(r1,r2));


        printf("\n Multip \n");

        r1=Multip(i,j);
        r2=Multip(k,l);

        printf("m%d ì´ ë í¬ê±°ë ê°ì.\n\n", Relation(r1,r2));


        printf("\n Divide \n");

        r1=Divide(i,j);
        r2=Divide(k,l);	

}

float Plus (int n1, int n2)
{
	printf("%d + %d = %d\n", n1,n2,n1+n2);
	return n1+n2;
}

float Minus (int n1, int n2)
{
        printf("%d - %d = %d\n", n1,n2,n1-n2);
	return n1-n2;
}

float Multip (int n1, int n2)
{
        printf("%d X %d = %d\n", n1,n2,n1*n2);
	return n1*n2;
}

float Divide (int n1, int n2)
{
        printf("%d Ã· %d = (%dÂ·Â·Â·%d =) %d/%d = %dÂ·%d/%d \n", n1,n2,(n1-(n1%n2))/n2,n1%n2, n1, n2, (n1-(n1%n2))/n2, n1%n2 ,n2);
	return n1/n2;
}

int Relation(float n1, float n2)
{
	return (n1<n2)+1;
}
