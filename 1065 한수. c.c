//어떤 양의 정수 n <=1000 입력하면
// 그보다 작고, 각 자리수가 등차수열인 수 갯수 출력
// 일의자리수 10의자리수는? 등차수열로 인정

#include <stdio.h>

int main(void)
{
	int n, sol_1=0,p1,p2,p3,d1,d2;
	scanf_s("%d", &n);


	// n 입력
	if (n < 100)
	{
		sol_1 = n;
	}

	else if (100 <= n <= 1000)
	{
		sol_1 = 99; //(1~99)
		for (int i = 100; i <= n; i++)
		{

			p1 = i % 10;
			p2 = (i/10) % 10;
			p3 = i / 100;
			d1 = p3 - p2;
			d2 = p2 -p1;

			if (d1 == d2)
			{
				sol_1++;
			}
		}
	}

	printf("%d", sol_1);





	return 0;
}