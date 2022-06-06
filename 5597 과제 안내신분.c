#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, m;
	scanf_s("%d %d", &n, &m);
	int** arr;
	arr = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < m; i++)
		arr[i] = (int*)malloc(sizeof(int) * m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int k;
			scnaf_s("%d", &k);
			arr[i][j] = k;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int k;
			scnaf_s("%d", &k);
			arr[i][j] +=k;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d ",arr[i][j])
		}
		printf("\b\n");
	}


	return 0;
}