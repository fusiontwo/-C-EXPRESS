#include <stdio.h>

int main(void)
{
	int x, y;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &x);
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &y);

	if (!(x%y))  // if((x % y) == 0)�� ���� �ǹ�
		printf("����Դϴ�.\n");
	else
		printf("����� �ƴմϴ�.\n");
	
	return 0;
}