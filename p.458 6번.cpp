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
			printf("�ٸ��ϴ�.\n");
			break;
		}
	}
	printf("�����ϴ�.\n");
	return 0;
}