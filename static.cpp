#include <stdio.h>

void sub() {
	static int scount = 0; // �������� ����, sub() �Լ��� ����Ǿ �ڵ����� �Ҹ���� ����, ���� ���� �����Ǹ鼭 ����
	int acount = 0; // �������� ����, sub() �Լ��� ����Ǹ� �ڵ� �Ҹ�
	printf("scount = %d\t", scount);
	printf("acount = %d\n", acount);
	scount++;
	acount++;
}

int main(void) {
	sub();
	sub();
	sub();
	return 0;
}