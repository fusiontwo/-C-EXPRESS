#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void get_random();

int main(void)
{
	get_random();
	get_random();
	get_random();
	get_random();
	return 0;
}

void get_random()
{
	static int inited = 0;
	int i;

		if (inited == 0) {
			srand((unsigned)time(NULL)); // 이 부분을 적합한 위치에 넣어야 함
			printf("초기화 실행\n");
			inited = 1;
		}
		else
		{
			printf("%d\n", rand());
		}
}