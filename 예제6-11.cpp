#include <stdio.h>

int main(void)
{
	printf("���ڸ� �Է��Ͻÿ�: ");
	int munja = getchar();

	switch (munja)
	{
	case 'R':
	case 'r':
		printf("Rectangle");
		break;
	case 'T':
	case 't':
		printf("Triangle");
		break;
	case 'C':
	case 'c':
		printf("Circle");
		break;
	default:
		printf("Unknown");
		break;
	}
	return 0;
}