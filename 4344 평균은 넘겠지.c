#include<stdio.h>
//�׽�Ʈ ���̽�
// ó���� �л��� 2�Էº��� ����(��0��������)
// ��ճѴ� �л��� ������ �ݿø��Ͽ� 3�ڸ����� ���

int main(void)
{
	int n;
	scanf_s("%d", &n);
	int arr_score[1001] = {0,};
	// �׽�Ʈ ���̽���ŭ �ݺ�
	for (int i = 0; i < n; i++)
	{
		int k = 0;
		scanf_s("%d", &k);
		arr_score[0] = k;
		int sum = 0;
		double average = 0;
		double count = 0;
		// �л� ����ŭ �ݺ�
		for (int j = 1; j <= k; j++)
		{
			int p;
			scanf_s("%d", &p);
			arr_score[j] = p;
			sum += arr_score[j];
		}
		//�� 0�̸� 0���
		average = (double)sum / arr_score[0];
		for (int m = 1; m <= arr_score[0]; m++)
		{
			if (average < arr_score[m])
			{
				count++;
			}
		}
		printf("%.3f%%\n", 100*count / arr_score[0]);




	}




	return 0;
}