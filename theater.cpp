#include <stdio.h>
#define SIZE 10 // �迭�� ũ��� ��ȣ ����� ����, �迭�� ũ�⸦ ������ �� ������

int main(void)
{
	char ans1;
	int ans2, i;
	int seats[SIZE] = { 0 }; // ������ ��Ÿ���� 1���� �迭�� ����, 0���� �ʱ�ȭ

	while (1)
	{
		printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n) ");
		scanf(" %c", &ans1);

		if (ans1 == 'n')
			break;
		printf("------------------------------\n");
		printf(" 1 2 3 4 5 6 7 8 9 10\n");
		printf("------------------------------\n");

		for (i = 0; i < SIZE; i++)
			printf(" %d", seats[i]);
		printf("\n");

		printf("���° �¼��� �����Ͻðڽ��ϱ�");
		scanf("%d", &ans2);
		if (seats[ans2 - 1] == 0) { // ������� �ʾ�����
			seats[ans2 - 1] = 1;
		}
		else                        // �̹� ����Ǿ�����
			printf("�̹� ����� �ڸ��Դϴ�.\n");
	}
	return 0;
}