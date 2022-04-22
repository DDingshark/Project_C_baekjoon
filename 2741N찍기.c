//그냥 n받고 1\n2\n 출력하깅
#include<stdio.h>

int main(void)
{
	int  a;
	scanf_s("%d", &a);

	for (int i = 0; i < a; i++)
	{
		printf("%d\n", i + 1);
	}


	return 0;
}