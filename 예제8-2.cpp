#include <stdio.h>

void check_alpha(char text) {
	if (text >= 97 && text <= 122) {
		printf("%c�� ���ĺ� �����Դϴ�.", text);
	}
}
int main(void) {
	char t;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &t);
	check_alpha(t);
	return 0;
}