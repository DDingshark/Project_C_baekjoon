// 201801667 �۸���
/*
"OOXXOXXOOO"�� ���� OX������ ����� �ִ�. O�� ������ ���� ���̰�, X�� ������ Ʋ�� ���̴�. ������ ���� ��� �� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�. ���� ���, 10�� ������ ������ 3�� �ȴ�.

"OOXXOXXOOO"�� ������ 1+2+0+0+1+0+0+1+2+3 = 10���̴�.

OX������ ����� �־����� ��, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

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