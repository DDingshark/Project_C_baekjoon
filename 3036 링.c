// 링 갯수 3<=~<=100

//반 지름 1<= ~ <=1000

//첫번째링을 한바퀴 돌리면 나머지 링은 몇바퀴?


#include<stdio.h>


int main()

{
	int n;
	scanf_s("%d", &n);

	int cir[98] = { 0, };
	int cir_top[98] = { 0, };
	int cir_bottom[98] = { 0, };
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &cir[i]);
	}

	// 바퀴 ->2 r pi / 2r_2pi
	// r/r_1 을 기약분수로
	// 소인수 분해? 
	int r_1 = cir[0];
	for (int i = 1; i < n; i++) // r2~rn 까지 돌리기
	{
		if (r_1 == 1)
		{
			for (int i = 1; i < n; i++) 
			{
				printf("%d/%d\n", 1, cir[i]);
			}
			break;
		}

		for (int j = 2; j <= 10; j++) //소인수 찾기
		{


			if (cir[0] % j == 0 && cir[i] %j == 0) //둘이 동시에 나머지가 0 = 약분이 되면 but j =1 ?
			{
				cir[0] = cir[0] / j; // 약분결과
				cir[i] = cir[i] / j; // 약분결과

				if (cir[0] == 1) //j가 결국 본인으로 로 나누어지면
				{
					cir_top[i] = cir[0]; //분자는 약분한 값
					cir_bottom[i] = cir[i]; // 자신으로 나누면 1;
					cir[0] = r_1;
					j = 1;//다시 2부터 
					printf("%d/%d\n", cir_top[i], cir_bottom[i]);
					break;
				}
				else if (cir[i] == 1)
				{
					cir_top[i] = cir[0];
					cir_bottom[i] = cir[i];
					cir[0] = r_1;
					j = 1;//다시 2부터
					printf("%d/%d\n", cir_top[i], cir_bottom[i]);

					break;
				}
				j = 1;
			}
		}
		if (cir_top[i] != 1 && cir_bottom[i] != 1)
		{
			cir_top[i] = cir[0];
			cir_bottom[i] = cir[i];

			printf("%d/%d\n", cir_top[i], cir_bottom[i]);
			cir[0] = r_1;
		}
	}

	return 0;
}