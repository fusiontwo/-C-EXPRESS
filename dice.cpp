#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int main(void)
{
	int freq[SIZE] = { 0 }; // ��� ��Ҹ� 0���� �ʱ�ȭ
	int i;

	for (i = 0; i < 10000; i++) // �ֻ����� 10000�� ������.
		++freq[rand() % 6]; // ������ ���� 6���� ���� �������� �ֻ����� ������ �����ϰ� �ش� ���� �󵵸� �ϳ� ������Ų��.

	printf("====================\n");
	printf(" �� ��\n");
	printf("====================\n");

	for (i = 0; i < SIZE; i++)
		printf("%3d %3d \n", i + 1, freq[i]); // %3d�� �ּ� 3�ڸ� �̻��� ������ �ǹ�

	return 0;
}