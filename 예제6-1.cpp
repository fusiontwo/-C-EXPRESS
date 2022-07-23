#include <stdio.h>

int main(void)
{
	printf("문자를 입력하시오: ");
	int munja = getchar();

	switch (munja)
	{
	case 'a':
		printf("모음입니다.\n");
		break;
	case 'e':
		printf("모음입니다.\n");
		break;
	case 'i':
		printf("모음입니다.\n");
		break;
	case 'o':
		printf("모음입니다.\n");
		break;
	case 'u':
		printf("모음입니다.\n");
		break;
	case 'A':
		printf("모음입니다.\n");
		break;
	case 'E':
		printf("모음입니다.\n");
		break;
	case 'I':
		printf("모음입니다.\n");
		break;
	case 'O':
		printf("모음입니다.\n");
		break;
	case 'U':
		printf("모음입니다.\n");
		break;
	default:
		printf("자음입니다.\n");
		break;
	}	
	return 0;
}