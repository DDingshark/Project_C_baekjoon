// 비오름차순 랭킹
// 같은점수 -> 점수의 등수 중에 가장 작은등수
// 100 90 90 80 1 2 2 4
// 점수 p(랭킹 등재가능) , 점수 n 개 비오름차순
// 태수의 점수 랭킹 리스트에서 몇등인지 구하라
// 랭킹에 못들어가면 -1
// 랭킹 리스트가 다 차있으면 점수가 커야 바뀜
//

// 1줄  n. 태수의 점수 , 10<=p<=50 , 점수<2억
// 2줄 현제 랭킹

// 태수의 랭킹은?



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
		// 정렬까진 완료!
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
						}// 앞번호 보단 작고, 뒷번호 보단 크다.

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
					break;// 똑같으면 등수도 같다
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
						}// 앞번호 보단 작고, 뒷번호 보단 크다.

					}
				}
				else if (score_T == score_list[i])
				{
					rank = i + 1;
					count++;
					break;// 똑같으면 등수도 같다
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