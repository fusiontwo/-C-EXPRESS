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
		printf("비밀번호: ");
		scanf("%d", &try_pw);
		if (real_pw == try_pw)
		{
			printf("로그인 완료");
			break;
		}
		count++;
	}
	if ( count == 3 )
		printf("로그인 시도횟수 초과");
	return 0;
}
