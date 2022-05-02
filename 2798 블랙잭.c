// 3=<N=<100장의 카드
//M <300,000을외친다, 3장의카드 고른다. M과 최대한 가깝게
// M을넘지않으면서 최대의 합을 출력(가능한경우만 문제가된다.)

//첫줄에 n,m
// n장의카드

#include<stdio.h>

int main(void)
{
	int n, m,sum,max=0;
	scanf_s("%d %d", &n, &m);

	int arr_num[100] = { 0, };

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", arr_num +i);
	}

	for(int i = 0;i<n-2;i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				sum = arr_num[i] + arr_num[j] + arr_num[k];
				if (max <= sum && sum <= m)
				{
					max = sum;
				}
			}
		}
	 }

	printf("%d", max);






	return 0;
}