#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_dice_face(int num);

int main(void)
{
	int num = 0;

	srand((unsigned)time(NULL)); // 난수 시드값 설정
	get_dice_face(num);
}
	
int get_dice_face(int num)
{
	int i;
	static int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0;
	
	for (i = 0; i < 100; i++)
	{
		num = rand() % 6 + 1;
		switch (num)
		{
		case 1 :
			count1++;
			break;
		case 2 :
			count2++;
			break;
		case 3 :
			count3++;
			break;
		case 4 :
			count4++;
			break;
		case 5:
			count5++;
			break;
		case 6:
			count6++;
			break;
		}
		if ((i + 1) % 100 == 0)
		{
			printf("1->%d\n", count1);
			printf("2->%d\n", count2);
			printf("3->%d\n", count3);
			printf("4->%d\n", count4);
			printf("5->%d\n", count5);
			printf("6->%d\n", count6);
		}
	}
	return num;
}
