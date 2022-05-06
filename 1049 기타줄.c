// 기타줄 n<=100 개가 cut
// 패키지 or 1개만

// 기타불 브랜드 m<=50 , 패키지가격 낱개가격 <=1000 순서대로 입력

// 필요한 돈의 수를 최소로

//한 브랜드에서 살필요는 X
#include<stdio.h>

#pragma warning(disable:4996)
int main()
{
	int n, m, min_pack,min_each;
	int cost_pack[50] = { 0, };
	int cost_each[50] = { 0, };

	scanf("%d %d", &n, &m);

	// 기타줄 갯수와 브랜드 m개
	//패키지는 6개당 가격
	int pack = n / 6;
	int each = n % 6;

	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &cost_pack[i], &cost_each[i]);
	}
	// 패키지, 개당 가격 배열 입력

	min_pack=9999;
	min_each = 9999;
	for (int i = 0; i < m; i++)
	{
		if (min_pack >= cost_pack[i])
		{
			min_pack = cost_pack[i];
		}
	}
	for (int i = 0; i < m; i++)
	{
		if (min_each >= cost_each[i])
		{
			min_each = cost_each[i];
		}
	}

	// 제일 싼 패키지 확인
	
	if (min_pack <= min_each * each)
	{
		pack++;
		each = 0;
	}
	else if (min_pack >= (min_each * 6))
	{
		pack = 0;
		each = n;
	}

	printf("%d", (min_pack * pack) + (min_each * each));







	return 0;
}