//ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, 
//N��° �ٿ��� �� N���� ��� ����
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