#include <stdio.h>

int main(void)
{
	int feet;
	double height, inch;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%d", &height);

	feet = height / 30.48;
	inch = (height % 30.48) / 2.54; // �����ϸ� ��Ʈ�� ����� �����µ� 5.118110��ġ�� ������ ����, ���� ã��..
	printf("%d�� %d��Ʈ %lf��ġ�Դϴ�.", height, feet, inch);

	return 0;
}