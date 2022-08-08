#include <stdio.h>

static int count_add;
static int count_sup;
static int count_mul;
static int count_dvd;
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
		scanf("%d %c %d", &n1, &op, &n2);

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
	count_add++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count_add);
	return x + y;
}
int sup(int x, int y)
{
	count_sup++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count_sup);
	return x - y;
}
int mul(int x, int y)
{
	count_mul++;
	printf("������ �� %d�� ����Ǿ����ϴ�.\n", count_mul);
	return x * y;
}
int dvd(int x, int y)
{
	count_dvd++;
	printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count_dvd);
	return x / y;
}