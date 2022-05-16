//0인경우
//정방향으로가다 끝
//역방형으로 오다끝

#include<stdio.h>


int main()
{
	long long n, m;
	long long count = 0;
	scanf_s("%lld %lld", &n, &m);

	if (m != 0)//0번이 아니면
	{
		if (n == 1)
		{
			long long k = 8 * m;
			count += k;
			printf("%lld", count);
		}
		else if (n == 5)
		{
			long long k = 8 * m;
			count += k;
			printf("%lld", count + 4);
		}
		
		else if (m % 2 == 0)//다시 가면서 세어야할때
		{
			long long k = 8 * (m / 2);
			count += k;
			printf("%lld", count + (n - 1));
		}
		else if (m % 2 != 0)
		{
			long long k = 8 * (m / 2);
			count += k;
			printf("%lld", (count + (8-n)+1));
		}

	}

	if (m == 0)
	{
		if (n == 1)
		{
			printf("0");
		}
		else if (n != 1)
		{
			count += n - 1;
			printf("%lld", count);
		}
	}





	return 0;
}



/*
영식이는 숫자를 셀 때, 왼손을 이용한다. 엄지손가락부터 시작해서 새끼손가락까지 차례대로 하나씩 센다. 그다음에 새끼손가락까지 센 다음에는 반대로 엄지손가락으로 다시 역방향으로 센다. 영식이는 자기가 원하는 숫자가 나올 때 까지 계속해서 이 방법으로 센다. 영식이는 절대 손가락을 건너뛰지 않는다. 예를 들어 숫자 10을 셀 때는, 엄지 → 검지 → 중지 → 약지 → 새끼 → 약지 → 중지 → 검지 → 엄지 → 검지 이렇게 센다.

영식이가 손가락을 하나 다쳤다. 영식이는 오른손으로는 셀 수 없기 때문에, 왼손으로 세야 한다. 다친 손가락을 이용해서 셀 수 있는 횟수가 제한되어 있다.

영식이가 셀 수 있는 최대 숫자를 출력하는 프로그램을 작성하시오.
*/