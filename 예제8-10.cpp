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
		printf("앞면 또는 뒷면(1 또는 0): ");
		scanf("%d", &user);

		if (user == b_rand())
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");

		printf("계속하시겠습니까?(y 또는 n):");
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