#include <stdio.h>

int main(void)
{
	int x = 0, y = 0;
	int result;

	result = 2 > 3 || 6 > 7;  // 2>3 ����(0)�̰�, 6>7�� ����(0)�̹Ƿ� ������ ���� ������� 0 
	printf("%d\n", result);

	result = 2 || 3 && 3 > 2;  // ���迬���ڰ� ���������ں��� �켱������ �����Ƿ� 3>2�� ���� ���Ǿ� ��(1)
	printf("%d\n", result);    // (���ٿ� ���� �ּ�) &&�����ڰ� ||�����ں��� �켱������ ���� 3&&1�� �ǰ� ��갪�� 1, 2||1�� ���Ǿ� ���� ������� 1

	result = x = y = 1;  // ���Կ����� ���չ����� �쿡�� ��, y=1�� ����Ǿ� x=1�� �ǰ�, result=x, ��ü ������ ���� 1
	printf("%d\n", result);

	result = - ++x + y--;
	printf("%d\n", result);

	return 0;
}