#include <stdio.h>

int main()
{

	int i;
	char c;


	for(i=0; i<260; i++)
	{	
		c=i;
		printf("%c의 ASCII코드는 %d 다.\n", c,i);
	}


	getchar();getchar();
}