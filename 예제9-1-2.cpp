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
		printf("연산을 입력하시오: ");
		scanf("%d %c %d", &n1, &op, &n2);

		switch (op)
		{
		case '+':
			printf("연산 결과: %d\n", add(n1, n2));
			break;
		case '-':
			printf("연산 결과: %d\n", sup(n1, n2));
			break;
		case '*':
			printf("연산 결과: %d\n", mul(n1, n2));
			break;
		case '/':
			printf("연산 결과: %d\n", dvd(n1, n2));
			break;
		}
	}
}
int add(int x, int y)
{
	count_add++;
	printf("덧셈은 총 %d번 실행되었습니다.\n", count_add);
	return x + y;
}
int sup(int x, int y)
{
	count_sup++;
	printf("뺄셈은 총 %d번 실행되었습니다.\n", count_sup);
	return x - y;
}
int mul(int x, int y)
{
	count_mul++;
	printf("곱셈은 총 %d번 실행되었습니다.\n", count_mul);
	return x * y;
}
int dvd(int x, int y)
{
	count_dvd++;
	printf("나눗셈은 총 %d번 실행되었습니다.\n", count_dvd);
	return x / y;
}