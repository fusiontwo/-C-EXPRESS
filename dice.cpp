#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int main(void)
{
	int freq[SIZE] = { 0 }; // 모든 요소를 0으로 초기화
	int i;

	for (i = 0; i < 10000; i++) // 주사위를 10000번 던진다.
		++freq[rand() % 6]; // 난수의 값을 6으로 나눈 나머지를 주사위의 면으로 간주하고 해당 면의 빈도를 하나 증가시킨다.

	printf("====================\n");
	printf(" 면 빈도\n");
	printf("====================\n");

	for (i = 0; i < SIZE; i++)
		printf("%3d %3d \n", i + 1, freq[i]); // %3d는 최소 3자리 이상의 정수를 의미

	return 0;
}