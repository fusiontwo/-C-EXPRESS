#include <stdio.h>

int main(void)
{
	int x,i;
	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�: ");
	scanf("%d", &x);
	for (i = x; i > 0; i--)
		printf("%d ", i);
	char beep = '\a';
	printf("%c", beep);

	return 0;
}