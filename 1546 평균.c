#include<stdio.h>

//����� �Է�<=1000
//���� �Է�(��0 ����)
// ����= (����/�ְ���)*100
//ù�� ��� ���
int main(void)
{
	int n;
	double sum=0, average;
	int max =0;
	int score[1000] = { 0, };
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int sc;
		scanf_s("%d", &sc);
		if (max < sc)
		{
			max = sc;
		}
		score[i] = sc;
	}
	// ���� �Է� + �ְ��� Ž��

	for (int i = 0; i < n; i++)
	{
		sum += ((double)score[i] / max) * 100;
	}
	average = sum / n;
	printf("%f", average);
	



	return 0;
}