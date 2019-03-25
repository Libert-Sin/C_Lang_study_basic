//하나의 문자를 입력받고, 해당 아스키문자의 코드 출력

#include <stdio.h>

main()
{
	char c;

	printf("하나만 써라\n > ");
	scanf("%c", &c);

	printf("\"%c\"의 ASCII코드는 \"%d\" 다.\n", c,c);

}