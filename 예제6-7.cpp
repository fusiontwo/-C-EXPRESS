#include <stdio.h>

int main(void)
{
	int height, weight, standard_weight;
	printf("ü�߰� Ű�� �Է��ϼ���: ");
	scanf("%d %d", &weight, &height);
	
	standard_weight = (height - 100) * 0.9;

	if (weight > standard_weight)
		printf("��ü���Դϴ�.\n");
	else if (weight == standard_weight)
		printf("ǥ���Դϴ�.\n");
	else if(weight < standard_weight)
		printf("��ü���Դϴ�.\n");
	
	return 0;
}