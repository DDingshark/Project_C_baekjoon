// 201801667 송명주
/*
"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.

"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.

OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
int main(void)
{
	int n;
	int score = 0;
	int count = 0;
	char pro[80] = { 0, };

	scanf_s("%d", &n);
	for (int a = 1; a <= n; a++)
	{
		scanf_s("%s", pro, sizeof(pro));
		int len = strlen(pro);
		for (int i = 0; i < len; i++)
		{
			if (pro[i] == 'X')
			{
				score += 0;
				count = 0;
			}
			else if (pro[i] == 'O')
			{
				if (i > 0 && count != 0)
				{
					count++;
					score += count;
				}
				else
				{
					count++;
					score += count;
				}
			}
		}
		printf("%d\n", score);
		count = 0;
		score = 0;
	}




	return 0;
}