#include <stdio.h>
#define SIZE 10 // 배열의 크기는 기호 상수로 정의, 배열의 크기를 변경할 때 편리함

int main(void)
{
	char ans1;
	int ans2, i;
	int seats[SIZE] = { 0 }; // 예약을 나타내는 1차원 배열을 선언, 0으로 초기화

	while (1)
	{
		printf("좌석을 예약하시겠습니까?(y 또는 n) ");
		scanf(" %c", &ans1);

		if (ans1 == 'n')
			break;
		printf("------------------------------\n");
		printf(" 1 2 3 4 5 6 7 8 9 10\n");
		printf("------------------------------\n");

		for (i = 0; i < SIZE; i++)
			printf(" %d", seats[i]);
		printf("\n");

		printf("몇번째 좌석을 예약하시겠습니까");
		scanf("%d", &ans2);
		if (seats[ans2 - 1] == 0) { // 예약되지 않았으면
			seats[ans2 - 1] = 1;
		}
		else                        // 이미 예약되었으면
			printf("이미 예약된 자리입니다.\n");
	}
	return 0;
}