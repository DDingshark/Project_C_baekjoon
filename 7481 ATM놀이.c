//첫줄에 test case
//지폐종류 a,b(a!=b) 금액
//가장적은 갯수 + 못하면 0
#include<stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	int n;
	scanf_s("%d", &n);
	int a, b, s;

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d %d", &a, &b, &s);
		int imbers = 0;
		if (a > b)
		{
			int temp;
			temp = a;
			a = b;
			b = temp;
			imbers++;
		}
		if (s < a)
		{
			printf("Impossible\n");
		}

		else
		{
			int remain, count = 0, count_b = 0;
			if (s < b)
			{
				count_b = 0;
				remain = s % a;
				if (remain != 0)
				{
					printf("Impossible\n");
				}
				else
				{
					count = s / a;
					if (imbers == 1)
					{
						int temp = count;
						count = count_b;
						count_b = temp;
					}
					printf("%d %d\n", count, count_b);
				}
			}
			else
			{
				remain = s % b;
				count_b = s / b;
				if (remain % a == 0)
				{
					count = remain / a;
					if (imbers == 1)
					{
						int temp = count;
						count = count_b;
						count_b = temp;
					}
					printf("%d %d\n", count, count_b);
				}
				else
				{
					for (int i = 1; count_b>=1; )
					{
						count_b -= 1;
						remain += b;
						if (remain % a != 0)
						{
							continue;
						}
						else if (remain % a == 0)
						{
							count = remain / a;
							if (imbers == 1)
							{
								int temp = count;
								count = count_b;
								count_b = temp;
							}
							printf("%d %d\n", count, count_b);
							break;
						}
					}
					if (count_b == 0)
					{
						printf("Impossible\n");
					}
				}
			}
		}
	}
	return 0;
}