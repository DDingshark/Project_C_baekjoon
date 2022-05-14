// 다솜이 1번 
// n명 <=50 득표수 <=100
// 최소매수표는?

int arr_max(int num[],int n);

#include<stdio.h>

int main(void)
{
	int n,max_vote,count=0;
	int vote[50] = { 0, };

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &vote[i]);
	}
	max_vote= arr_max(vote, n);

	while (max_vote!=0)
	{
		vote[0] += 1;
		vote[max_vote] -= 1;
		count++;
		max_vote = arr_max(vote, n);
	}
	
	printf("%d", count);




	return 0;
}


int arr_max(int num[],int n)
{
	int max = -1;
	int max_vote = -1;
	for (int i = 0; i < n; i++)
	{

		if (num[i] >= max)
		{
			max_vote = i;
			max = num[i];
		}
	}

	return max_vote;
}

