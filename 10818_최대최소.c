//N���� ������ �־�����. �̶�, �ּڰ��� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

//INPUT
// ù° �ٿ� ������ ���� N (1 �� N �� 1,000,000)�� �־�����. 
// ��° �ٿ��� N���� ������ �������� �����ؼ� �־�����. ��� ������ -1,000,000���� ũ�ų� ����, 1,000,000���� �۰ų� ���� �����̴�.

/*OUTPUT
ù° �ٿ� �־��� ���� N���� �ּڰ��� �ִ��� �������� ������ ����Ѵ�.*/
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