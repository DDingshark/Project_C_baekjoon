/*
* 문제
양수 A가 N의 진짜 약수가 되려면, N이 A의 배수이고, A가 1과 N이 아니어야 한다. 어떤 수 N의 진짜 약수가 모두 주어질 때, N을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 N의 진짜 약수의 개수가 주어진다. 이 개수는 50보다 작거나 같은 자연수이다. 둘째 줄에는 N의 진짜 약수가 주어진다. 1,000,000보다 작거나 같고, 2보다 크거나 같은 자연수이고, 중복되지 않는다.

출력
첫째 줄에 N을 출력한다. N은 항상 32비트 부호있는 정수로 표현할 수 있다.
*/
#include<stdio.h>

int main(void)
{
	int a,b=0,min,max;
	int arr[51] = { 0, };
	scanf_s("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf_s("%d", &b);
		arr[i] = b;
	}
	max = arr[0];
	for (int i= 0; i < a; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	min = arr[0];
	for (int i = 0; i < a; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}

	printf("%d", (min * max));


	return 0;
}
