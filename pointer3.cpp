#include <stdio.h>
int main(void)
{
	int i = 10;
	int *p;

	p = &i;  // p�� i�� ����Ų��.
	printf("i = %d\n", i);

	*p = 20;  // p�� ����Ű�� ��ġ�� 20�� ����ȴ�.
	printf("i = %d\n", i);

	return 0;
}