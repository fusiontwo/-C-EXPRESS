#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int x, y, answer, i;

	srand(time(NULL));  // ���� �߻��⸦ �ʱ�ȭ�Ѵ�.

	for (i = 0; i < 10; i++) {
		x = rand() % 10;  // ������ 0���� 9���̷� �����.
		y = rand() % 10;
		printf("%d + %d = ", x, y);
		scanf("%d", &answer);
		if (x + y == answer)
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");
	}
	return 0;
}