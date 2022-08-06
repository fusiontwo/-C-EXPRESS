#include <stdio.h>
#include <stdarg.h>

int sum(int, ...);
int main(void)
{
	int answer = sum(4, 4, 3, 2, 1); // sum �μ��� ����
	printf("���� %d�Դϴ�.\n", answer);

	return (0);
}

int sum(int num, ...) // ���� �Ű� ���� ǥ��
{
	int answer = 0;
	va_list argptr;

	va_start(argptr, num); // ���� �Ű� ���� ��� ����
	for (; num > 0; num--)
		answer += va_arg(argptr, int); // �μ� ����

	va_end(argptr); // ���� �Ű� ���� ��� ����
	return(answer);
}