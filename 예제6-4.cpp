#include <stdio.h>
#include <stdlib.h> //int rnad(void)
#include <time.h> // time_t time(time_t*timer)

int main(void)
{
	int h, c;
	printf("�����Ͻÿ�(1: ���� 2: ���� 3: ��)");
	scanf("%d", &h);

	srand(time(NULL));
	c = (rand() % 3) + 1;

	if ((h == 1 && c == 1) || (h == 2 && c == 2) || (h == 3 && c == 3))
		printf("��ǻ�ʹ� %d�� �����߰�, �����", c);
	else if ((h == 1 && c == 3) || (h == 2 && c == 1) || (h == 3 && c == 2))
		printf("��ǻ�ʹ� %d�� �����߰�, ����ڰ� �̰���", c);
	else
		printf("��ǻ�ʹ� %d�� �����߰�, ��ǻ�Ͱ� �̰���", c);
	
	return 0;
}