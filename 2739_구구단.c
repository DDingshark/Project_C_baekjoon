//N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 
//출력 형식에 맞춰서 출력하면 된다.
//In_ 첫째 줄에 N이 주어진다. N은 1보다 크거나 같고, 9보다 작거나 같다.
/*
* Out_
2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 9 = 18
*/
#include<stdio.h>
int main(void)
{
	int a;
	scanf("%d", &a);
	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", a, i, (a * i));
	}



	return 0;
}