#include<stdio.h>
//���� 10�� �Է�
// 42�� ����������
// ���δٸ� �������� ����

int main(void)
{
	int count = 0;
	int remain[42] = { 0, };
	for (int i = 0; i < 42; i++)
	{
		remain[i] = i;
	}
	puts("");
	for (int i = 0; i < 10; i++)
	{
		int k = 0;
		scanf_s("%d", &k);
		k = k % 42;
		for (int j = 0; j < 42; j++)
		{
			if (remain[j] == k)
			{
				remain[j] = -1;
				count++;
			}
		}

	}

	printf("%d", count);


	return 0;
}