#include <stdio.h>

int recursive(int n, int k);
int main(void)
{
	int n, k;
	printf("n=");
	scanf("%d", &n);
	printf("k=");
	scanf("%d", &k);
	printf("%d", recursive(n, k));
}
int recursive(int n, int k)
{
	if (k == 0 || k == n)
		return 1;
	else if (k > 0 && k < n)
		return recursive(n - 1, k - 1) + recursive(n - 1, k);
}