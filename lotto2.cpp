// 난수 생성 프로그램 
// 일반적으로 [a,b] 구간의 난수를 발생하려면 printf("%d ", a+(rand()%(b-a+1)); 
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 45 

int main(void)
{
	int i;

	srand((unsigned)time(NULL));

	for (i = 0; i < 6; i++)
		printf("%d ", 1 + rand() % MAX);
	printf("\n");
	return 0;
}