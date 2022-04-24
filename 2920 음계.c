// 201801667 송명주
/*
다장조는 c d e f g a b C, 총 8개 음으로 이루어져있다. 이 문제에서 8개 음은 다음과 같이 숫자로 바꾸어 표현한다. c는 1로, d는 2로, ..., C를 8로 바꾼다.

1부터 8까지 차례대로 연주한다면 ascending, 8부터 1까지 차례대로 연주한다면 descending, 둘 다 아니라면 mixed 이다.

연주한 순서가 주어졌을 때, 이것이 ascending인지, descending인지, 아니면 mixed인지 판별하는 프로그램을 작성하시오.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
int main(void)
{
	int a=0, d=0;
	int cend[8] = { 0, };
	for (int i = 0; i < 8; i++)
	{
		int a;
		scanf_s("%d", &a);
		cend[i] = a;
	}

	for (int i = 1; i < 9; i++)
	{
		if (i == cend[i-1])
		{
			a++;
		}
		else if ((9-i) == cend[i-1])
		{
			d++;
		}
	}

	if (a == 8)
	{
		printf("ascending");
	}
	else if (d == 8)
	{
		printf("descending");
	}
	else
	{
		printf("mixed");
	}

	return 0;
}