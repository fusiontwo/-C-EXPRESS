#include <stdio.h>

int is_multiple(int n, int m); // �Լ� ����

int main(void)
{
	int x, y;
	printf("ù��° ������ �Է��Ͻÿ�:");
	scanf("%d", &x);
	printf("�ι�° ������ �Է��Ͻÿ�:");
	scanf("%d", &y);
	if (is_multiple(x, y) == 1)
		printf("%d�� %d�� ����Դϴ�.", x, y);
	else
		printf("%d�� %d�� ����� �ƴմϴ�.", x, y);
	return 0;
}

int is_multiple(int n, int m) {
	if (n % m == 0)
		return 1;
	else
		return 0;
}



