//�־��� �� N�� �߿��� �Ҽ��� �� ������ ã�Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

//INPUT
//ù �ٿ� ���� ���� N�� �־�����. N�� 100�����̴�. �������� N���� ���� �־����µ� ���� 1,000 ������ �ڿ����̴�.

//OUTPUT
//�־��� ���� �� �Ҽ��� ������ ����Ѵ�.


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