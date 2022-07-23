#include <stdio.h>

int main(void)
{
	int height, weight, standard_weight;
	printf("체중과 키를 입력하세요: ");
	scanf("%d %d", &weight, &height);
	
	standard_weight = (height - 100) * 0.9;

	if (weight > standard_weight)
		printf("과체중입니다.\n");
	else if (weight == standard_weight)
		printf("표준입니다.\n");
	else if(weight < standard_weight)
		printf("저체중입니다.\n");
	
	return 0;
}