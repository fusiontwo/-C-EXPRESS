#include <stdio.h>

int main(void)
{
	int i = 3000;
	int* p = NULL;  // �������� ���� �� �ʱ�ȭ

	p = &i;  // ���� i�� �ּҸ� p�� �����Ѵ�.

	printf("p = %u\n", p);  // p�� ����Ű�� �ּҿ��� �����͸� �о�´�.
	printf("&i = %u\n\n", &i);

	printf("i = %d\n", i);
	printf("*p = %d\n", *p);  // �����͸� �̿��� ���� ����

	return 0;
}