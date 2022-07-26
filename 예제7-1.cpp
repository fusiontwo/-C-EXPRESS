#include <stdio.h>

int main(void)
{
	int x,i;
	printf("카운터의 초기값을 입력하시오: ");
	scanf("%d", &x);
	for (i = x; i > 0; i--)
		printf("%d ", i);
	char beep = '\a';
	printf("%c", beep);

	return 0;
}