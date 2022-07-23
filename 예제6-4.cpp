#include <stdio.h>
#include <stdlib.h> //int rnad(void)
#include <time.h> // time_t time(time_t*timer)

int main(void)
{
	int h, c;
	printf("선택하시오(1: 가위 2: 바위 3: 보)");
	scanf("%d", &h);

	srand(time(NULL));
	c = (rand() % 3) + 1;

	if ((h == 1 && c == 1) || (h == 2 && c == 2) || (h == 3 && c == 3))
		printf("컴퓨터는 %d를 선택했고, 비겼음", c);
	else if ((h == 1 && c == 3) || (h == 2 && c == 1) || (h == 3 && c == 2))
		printf("컴퓨터는 %d를 선택했고, 사용자가 이겼음", c);
	else
		printf("컴퓨터는 %d를 선택했고, 컴퓨터가 이겼음", c);
	
	return 0;
}