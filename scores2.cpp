#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 // SIZE 값 정의

int main(void)
{
	int scores[SIZE]; // 배열 선언

	for (int i = 0; i < SIZE; i++)
		scores[i] = rand() % 100; // 배열 요소에 0부터 99까지의 난수를 채운다.

	for (int i = 0; i < SIZE; i++)
		printf("scores[%d]=%d\n", i, scores[i]);
	return 0;
}