#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 // SIZE �� ����

int main(void)
{
	int scores[SIZE]; // �迭 ����

	for (int i = 0; i < SIZE; i++)
		scores[i] = rand() % 100; // �迭 ��ҿ� 0���� 99������ ������ ä���.

	for (int i = 0; i < SIZE; i++)
		printf("scores[%d]=%d\n", i, scores[i]);
	return 0;
}