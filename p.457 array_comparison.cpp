#include <stdio.h>

int main(void)
{
	int a[10];
	int b[10];

	for (int i = 0; i < 10; i++)
	{
		if (a[i] != b[i])
		{
			printf("�ٸ��ϴ�.\n");
			break;
		}
	}
	printf("�����ϴ�.");
	return 0;
}