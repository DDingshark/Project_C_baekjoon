#include<stdio.h>

int main(void)
{
	int n, m, j, k;
	int sum=0;
	int arr_sum[100001] = { 0, };
	scanf_s("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		int k;
		scanf_s("%d", &k);
		sum += k;
		arr_sum[i+1] = sum;
	}

	for (int i = 0; i < m; i++)
	{
		scanf_s("%d %d", &j, &k);
		printf("%d\n", (arr_sum[k] - arr_sum[j-1]));
	}
	return 0;
}