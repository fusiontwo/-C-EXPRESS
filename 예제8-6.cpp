#include <stdio.h>
#include <math.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main(void)
{
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	if (even(n) == 1)
		printf("even()�� ���: ¦��\n");
	else
		printf("even()�� ���: Ȧ��\n");

	printf("absolute()�� ���: %d\n", absolute(n));

	if ( sign(n) == -1 )
		printf("sign()�� ���: ����\n");
	else if (sign(n) == 0)
		printf("sign()�� ���: 0\n");
	else 
		printf("sign()�� ���: ���\n");
}

int even(int n)
{
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}

int absolute(int n)
{
	return fabs(n);
}

int sign(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0)
		return 0;
	else
		return 1;
}