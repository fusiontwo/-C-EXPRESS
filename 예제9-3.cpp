#include <stdio.h>

int check();
int main(void)
{
	check();
}
int check()
{
	int real_pw = 1234;
	int try_pw = 0;
	static int count = 0;
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("��й�ȣ: ");
		scanf("%d", &try_pw);
		if (real_pw == try_pw)
		{
			printf("�α��� �Ϸ�");
			break;
		}
		count++;
	}
	if ( count == 3 )
		printf("�α��� �õ�Ƚ�� �ʰ�");
	return 0;
}
