/* �Ǽ� ���� ����� �� �ݿø��ϴ� ���α׷� */
#include <stdio.h>

int main(void)
{
	float x;
	int round_x;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%f", &x);

	round_x = int(x + 0.5);
	printf("�Ǽ� ���� �ݿø��߽��ϴ�. %d", round_x);

	return 0;
}