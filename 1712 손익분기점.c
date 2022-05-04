// A만큼 고정비용 , B반큼 가변비용(1대당 비용)
// if A= 1000, B= 70 , -> 1070만원 10대 17000ㅇㅋ

// C로 가격 책정 최초로 이익이 발생하는 지점, 
// 21억< 자연수 A,B,C입력
// 최초로 이익발생하는 판매량 , 존재 x시 -1 출력



#include<stdio.h>


int main()
{
	long long a, b, c,i=0;

	scanf("%lld %lld %lld", &a, &b, &c);
	//입력 

	//1대의 가격 = a + (판매량*b) < 판매량 *c 가되는 지점
	if (b >= c)
	{
		printf("-1");
	}
	/*else {
		while (1)
		{
			if (a + (i * b) < i * c)
			{
				printf("%lld", i);
				break;
			}
			i++;
		}
	}

	*/
	else {
		long long d = a / (c - b);
		printf("%lld", d + 1);
	}



	return 0;
}