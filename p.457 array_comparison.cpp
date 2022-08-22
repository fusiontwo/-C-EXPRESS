#include <stdio.h>

int main(void)
{
	int a[10];
	int b[10];

	for (int i = 0; i < 10; i++)
	{
		if (a[i] != b[i])
		{
			printf("다릅니다.\n");
			break;
		}
	}
	printf("같습니다.");
	return 0;
}