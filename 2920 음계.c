// 201801667 �۸���
/*
�������� c d e f g a b C, �� 8�� ������ �̷�����ִ�. �� �������� 8�� ���� ������ ���� ���ڷ� �ٲپ� ǥ���Ѵ�. c�� 1��, d�� 2��, ..., C�� 8�� �ٲ۴�.

1���� 8���� ���ʴ�� �����Ѵٸ� ascending, 8���� 1���� ���ʴ�� �����Ѵٸ� descending, �� �� �ƴ϶�� mixed �̴�.

������ ������ �־����� ��, �̰��� ascending����, descending����, �ƴϸ� mixed���� �Ǻ��ϴ� ���α׷��� �ۼ��Ͻÿ�.
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