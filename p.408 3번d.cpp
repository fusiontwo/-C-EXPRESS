#include <stdio.h>
void f(void);

int main(void)
{
	f();
	f();
	return 0;
}
void f(void)
{
	static int count = 0; // ���� �����̱� ������ ���� �ʱ�ȭ���� �ʰ� �����Ǿ� ���
	printf("%d\n", count++);
}