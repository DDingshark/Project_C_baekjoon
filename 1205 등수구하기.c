// ��������� ��ŷ
// �������� -> ������ ��� �߿� ���� �������
// 100 90 90 80 1 2 2 4
// ���� p(��ŷ ���簡��) , ���� n �� ���������
// �¼��� ���� ��ŷ ����Ʈ���� ������� ���϶�
// ��ŷ�� ������ -1
// ��ŷ ����Ʈ�� �� �������� ������ Ŀ�� �ٲ�
//

// 1��  n. �¼��� ���� , 10<=p<=50 , ����<2��
// 2�� ���� ��ŷ

// �¼��� ��ŷ��?



#include<stdio.h>
#include<stdlib.h>
void swap(int* p, int* q);
void  bubble_sort(int arr[], int length);
int main()
{
	int n, score_T, p;
	int count = 0;
	int rank=0;
	scanf_s("%d %d %d", &n, &score_T, &p);
	int score_list[51] = { 0, };
	if (n == 0)
	{
		rank = 1;
	}

	else
	{
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", &score_list[i]);
		}

		bubble_sort(score_list, n);
		// ���ı��� �Ϸ�!
		if (n == p)
		{
			if (score_T > score_list[0])
			{
				rank = 1;
			}

			for (int i = 0; i <n; i++)
			{
				if (score_T < score_list[i])
				{
					if (i + 1 < n)
					{
						if (score_T > score_list[i + 1])
						{
							rank = i + 2;
							count++;
							break;
						}// �չ�ȣ ���� �۰�, �޹�ȣ ���� ũ��.

					}
				}
				else if (score_T == score_list[i])
				{
					if (score_T == score_list[n - 1])
					{
						rank = -1;
						break;
					}
					rank = i + 1;
					count++;
					break;// �Ȱ����� ����� ����
				}
			}
			if (count == 0 && rank != 1)
			{
				rank = -1;
			}
		}

		if (n < p)
		{
			if (score_T > score_list[0])
			{
				rank = 1;
			}

			for (int i = 0; i < n; i++)
			{
				if (score_T < score_list[i])
				{
					if (i + 1 < n)
					{
						if (score_T > score_list[i + 1])
						{
							rank = i + 2;
							count++;
							break;
						}// �չ�ȣ ���� �۰�, �޹�ȣ ���� ũ��.

					}
				}
				else if (score_T == score_list[i])
				{
					rank = i + 1;
					count++;
					break;// �Ȱ����� ����� ����
					}
				}
			if (count == 0 && rank != 1) 
			{
				rank = n+1;
			}
		}
	}
	printf("%d", rank);

	return 0;
}

void swap(int* p, int* q) 
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

void  bubble_sort(int arr[], int length)
{
	int pass, current;

	for (pass = 1; pass < length; pass++)
	{
		for (current = 0; current < (length - pass); current++)
		{
			if (arr[current] < arr[current + 1])
			{
				swap(&arr[current],&arr[current+1]);
			}
		}
	}
}