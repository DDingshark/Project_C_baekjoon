// 3=<N=<100���� ī��
//M <300,000����ģ��, 3����ī�� ����. M�� �ִ��� ������
// M�����������鼭 �ִ��� ���� ���(�����Ѱ�츸 �������ȴ�.)

//ù�ٿ� n,m
// n����ī��

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