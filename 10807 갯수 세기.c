#include<stdio.h>

int main()
{
	int n, m, count = 0;
	int arr[100] = { 0, };
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", arr+i);
	}
	scanf_s("%d", &m);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == m)
		{
			count++;
		}
	}

	printf("%d", count);


	return 0;
}