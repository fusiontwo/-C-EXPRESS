#include <stdio.h>

int add(int x, int y);
int sup(int x, int y);
int mul(int x, int y);
int dvd(int x, int y);

int main(void)
{
	int n1, n2;
	char op;

	while (1)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d%c%d", &n1, &op, &n2);
		
		switch (op)
		{
		case '+':
			printf("���� ���: %d\n", add(n1, n2));
		break;
		case '-':
			printf("���� ���: %d\n", sup(n1, n2));
		break;
		case '*':
			printf("���� ���: %d\n", mul(n1, n2));
		break;
		case '/':
			printf("���� ���: %d\n", dvd(n1, n2));
		break;
		}
	}
}
int add(int x, int y)
{
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	return x + y;
}
int sup(int x, int y)
{
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	return x - y;
}
int mul(int x, int y)
{
	static int count = 0;
	count++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
	return x * y;
}
int dvd(int x, int y)
{
	static int count = 0;
	count++;
	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count);
	return x / y;
}