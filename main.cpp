#include <stdio.h>

extern unsigned random_i(void);
extern double random_f(void);

extern int MOD; // 연결된 전역 변수

int main(void)
{
	int i;

	MOD = 10;
	for (i = 0; i < 10; i++)
		printf("%d ", random_i());

	return 0;
}
