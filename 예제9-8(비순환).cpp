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
	static int count=1;
	while (num > 10)
	{
		num = num / 10;
		count++;
	}
	return count;
}
