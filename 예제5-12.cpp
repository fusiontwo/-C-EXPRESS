#include <stdio.h>

int main(void)
{
	char c1, c2, c3, c4;
	unsigned int result = 0x00000000;

	printf("ù��° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &c1);

	printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &c2);

	printf("����° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &c3);

	printf("�׹�° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &c4);

	result = result | c1;
	result = result | (c2 << 8);
	result = result | (c3 << 16);
	result = result | (c4 << 24);

	printf("�����: %x\n", result);

	return 0;
}