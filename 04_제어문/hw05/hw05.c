//int형 변수가 표현할 수 있는 양수의 최대값을 출력 - 변수 1개

#include <stdio.h>

main()
{
	int j;

	for(j=1;j>0;j++)
	{
		if((j+1)<0)
			break;
	}


	printf("%d\n",j);
}
