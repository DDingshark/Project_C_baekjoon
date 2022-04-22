//첫째 줄에는 별 1개, 둘째 줄에는 별 2개, 
//N번째 줄에는 별 N개를 찍는 문제
#include<stdio.h>

int main(void)
{
	int  a;
	scanf_s("%d", &a);

	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}