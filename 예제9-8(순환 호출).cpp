#include <stdio.h>

int count(int num);

int main(void)
{
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	printf("�ڸ����� ����: %d", count(n));
}
int count(int num)
{
	if (num == 0) {
		return 0;
	}
	else {
		return 1 + count(num / 10); // ��ȯ ȣ��
	}
}
