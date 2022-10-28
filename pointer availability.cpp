#include <stdio.h>
int main(void)
{
	int *p = NULL;

	if (p != NULL)
		printf("포인터 p는 유효합니다.\n");
	else
		printf("포인터 p는 유효하지 않습니다.\n");
}