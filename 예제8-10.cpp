#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand();

int main(void)
{
	int user;
	char ch = 0;
	srand((unsigned)time(NULL));

	while(1) {
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0): ");
		scanf("%d", &user);

		if (user == b_rand())
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");

		printf("����Ͻðڽ��ϱ�?(y �Ǵ� n):");
		scanf(" %c", &ch);
		
		if (ch == 'y')
			continue;
		else
			break;
	}
	return 0;
}

int b_rand()
{
	return rand() % 2;
}