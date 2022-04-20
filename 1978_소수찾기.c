//주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.

//INPUT
//첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.

//OUTPUT
//주어진 수들 중 소수의 개수를 출력한다.


#include<stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	int num_arr[100] = { 0, };
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num_arr[i]);
	}
	int count = 0;
	int sol = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 1; j <= num_arr[i]; j++)
		{
			if (num_arr[i] == 1) {
				sol++;
			}

			else if (num_arr[i] % j == 0)
			{
				count++;
			}

		}

		if (count > 2) {
			sol++;
		}
		count = 0;
	}
	printf("%d", (N - sol));
	return 0;
}