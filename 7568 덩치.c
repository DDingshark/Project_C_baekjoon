//키, 몸무게 둘다크다 = 덩치가크다 , 하나만크다 =공동
// 나보다 큰사람의수가 등수;


#include<stdio.h>
int main()
{
	int n, x, y;
	scanf_s("%d", &n);
	int arr_n[50] = { 0, };
	int arr_x[50] = { 0, };
	int arr_y[50] = { 0, };
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &x, &y);
		arr_x[i] = x;
		arr_y[i] = y;
		arr_n[i] = 1;
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr_x[i] > arr_x[j] && arr_y[i] > arr_y[j])
			{
				arr_n[j] = arr_n[j] + 1;
			}
			else if (arr_x[i] < arr_x[j] && arr_y[i] < arr_y[j])
			{
				arr_n[i] = arr_n[i] + 1;
			}
			else
			{
				continue;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr_n[i]);
	}











	return 0;
}