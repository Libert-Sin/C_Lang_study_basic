//메모리 상의 정보 출력

#include <stdio.h>

main()
{

	unsigned int *mmr;
	unsigned int i;

	mmr=&i;

	for(;1;mmr++)
		printf("ë©ëª¨ë¦¬ ì£¼ì : %u \t ê° : %x\n",mmr,*mmr);
}
