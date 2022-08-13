#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(void)
{
	int prices[SIZE] = { 0 };
	int i, minimum;

	printf("-----------------------------------------\n");
	printf("1   2   3   4   5   6   7   8   9   10\n");
	printf("-----------------------------------------\n");
	srand((unsigned)time(NULL));
	for (i = 0; i < SIZE; i++) {
		prices[i] = (rand() % 100) + 1; // �迭�� ������ �ʱ�ȭ�Ѵ�.
		printf("%-3d ", prices[i]); // %-3d�� 3�ڸ��� �ʵ忡 ���� �����Ͽ� ���
	}
	printf("\n\n");

	minimum = prices[0]; // ù ��° �迭 ��Ҹ� �ּҰ����� ����

	for (i = 1; i < SIZE; i++)
	{
		if (prices[i] < minimum) // ������ �ּڰ����� �迭 ��Ұ� ������, �迭 ��Ҹ� �ּҰ����� ����
			minimum = prices[i];
	}
	printf("�ּҰ��� %d�Դϴ�.\n", minimum);
	return 0;
}