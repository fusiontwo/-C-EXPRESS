#include <stdio.h>

#define STUDENTS 5 // ��ȣ ����� �л����� ���� ����

int main(void)
{
	int scores[STUDENTS]; // �� �л����� ������ ������ ũ�Ⱑ 5�� ������ �迭 ����
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++)
	{
		printf("�л����� ������ �Է��Ͻÿ�: ");
		scanf("%d", &scores[i]); // scores[i]�� �迭 scores�� i��° ���, �迭�� ��ҵ� �ϳ��� ����
	}

	for (i = 0; i < STUDENTS; i++) // �� ���� �ݺ����� i��° �л��� ������ scores[i]�� sum�� ��������.
		sum += scores[i];

	average = sum / STUDENTS;
	printf("���� ���= %d\n", average);

	return 0;
}