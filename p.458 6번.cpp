#include <stdio.h>
#define MAX_SIZE 3

int main(void)
{
	int a[MAX_SIZE] = { 0, 1, 2 };
	int b[3] = {0, 1, 2};

	for (int i = 0; i <= MAX_SIZE; i++)
	{
		if (b[i] != a[i])
		{
			printf("다릅니다.\n");
			break;
		}
	}
	printf("같습니다.\n");
	return 0;
}
