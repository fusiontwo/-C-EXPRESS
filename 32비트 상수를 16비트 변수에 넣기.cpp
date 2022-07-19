#include <stdio.h>

int main(void)
{
	short i = 12345678;
	printf("%x\n", 12345678);  // bc614e 출력
	printf("%x\n", i);         // 614e 출력

	return 0;
}