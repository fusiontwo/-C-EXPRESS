#include <stdio.h>

int sum(int n);

int main(void)
{
	printf("%d",sum(5));
	return 0;
}
int sum(int n)
{
	printf("%d\n", n);
	if (n < 1) return 1;
	else return(n + sum(n - 1));
}