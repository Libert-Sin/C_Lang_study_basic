#include <stdio.h>

main()
{
        int i,j;

        printf("\n숫자1 : ");
        scanf("%d",&i);

        printf("\n숫자2 : ");
        scanf("%d",&j);

        if(i>j)
        {
                printf("더 큰수 : %d \n", i);
        }

        else if(j>i)
        {
                printf("더 큰수 : %d \n", j);
        }

	else
	{
		printf("계산 불가\n");
	}



}
