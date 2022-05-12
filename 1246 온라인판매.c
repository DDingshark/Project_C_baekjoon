// m<50개의 자연수로 이루어진 집합
// 자연수 n
// |N-xyz|의 최솟값
//첫줄에 n<1000 s<50(원소의 갯수)




#include<stdio.h>

int main(void)
{
	int n, m,sol_min=1111111111111,sol;
	scnaf_s("%d %d", &n, &m);
	int set_s[50] = { 0, };
	if (m == 0)
	{
		char a = getchar();
	}
	else
	{
		for (int i = 0; i < m; i++)
		{
			int k;
			scanf_s("%d", &k);
			set_z[i] = k;
		}
	}


	for (int x = 1; x < 1000; x++)
	{
		for (int y = 2; y < 999; y++)
		{
			for (int z = 3; z < 998); z++)
			{
				for (int k = 0; k < m; k++)
				{
					if (x == set_z[k] || y == set_s[k] || z == set_[k])
					{
						break;

					}
					else
					{
						sol = n - (x * y * z);
						if (sol < 0)
						{
							sol *= -1;
						}
						if (sol < sol_min)
						{
							sol_min = sol;
						}
					}
				}
			}
		}
	}

	// 집합까지 입력 완료

	printf("%d", sol_min);
	return 0;
}
