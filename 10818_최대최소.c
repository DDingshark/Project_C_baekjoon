//N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

//INPUT
// 첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 
// 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.

/*OUTPUT
첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.*/
#include<stdio.h>
int main(void)
{
	int N;

	scanf("%d", &N);
	int max, min;
	int num_arr[1000000] = { 0, };

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num_arr[i]);
	}
	min = num_arr[0];
	max = num_arr[0];

	for (int i = 0; i < N; i++)
	{
		if (min >= num_arr[i]) {
			min = num_arr[i];
		}
		else
			continue;
	}

	for (int j = 0; j < N; j++)
	{
		if (max <= num_arr[j]) {
			max = num_arr[j];
		}
		else
			continue;
	}

	printf("%d %d", min, max);





	return 0;
}