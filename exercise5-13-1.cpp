#include <stdio.h>

int main(void)
{
	int nohome_period, age, family_number, result;

	printf("������ �Ⱓ�� �Է��Ͻÿ�: ");
	scanf("%d", &nohome_period);
	printf("������ ������ �Է��Ͻÿ�: ");
	scanf("%d", &age);
	printf("������ ���� �Է��Ͻÿ�: ");
	scanf("%d", &family_number);

	result = ((nohome_period >= 3) && (age >= 40) && (family_number >= 3));
	printf("result=%d\n", result);

	return 0;
}