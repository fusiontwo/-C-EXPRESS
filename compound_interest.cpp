// �������ڰ��
#include <stdio.h>

#define RATE 0.07            // ����
#define INVESTMENT 1000000  // �ʱ� ���ڱ�
#define YEARS      10        // ���� �Ⱓ

int main(void)
{
	int i;
	double total = INVESTMENT;   // ������ �հ�

	printf("==============\n");
	printf("����   ������\n");
	printf("==============\n");

	for (i = 1; i <= YEARS; i++)
	{
		total = total * (1 + RATE);  // ���ο� ������ ���
		printf("%2d %10.1f\n", i, total); // %2d�� 2�ڸ����� ������ ������ �߰��ؼ� 2�ڸ��� Ȯ��, %10.1f�� 10ĭ���� ����ϰ� �Ҽ��� ù° �ڸ����� ǥ��
	}

	return 0;
}