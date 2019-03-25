//메모리 상의 정보 출력

#include <stdio.h>

main()
{

	unsigned int *mmr;
	unsigned int i;

	mmr=&i;

	for(;1;mmr++)
		printf("메모리 주소 : %u \t 값 : %x\n",mmr,*mmr);
}