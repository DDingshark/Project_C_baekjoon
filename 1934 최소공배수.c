// 최소공배수


#include <stdio.h>
int	lcm(int a, int b);
int gcd(int a, int b);


int main(void)
{
	int n,a,b;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &a, &b);
		if (a > b)
		{
			int temp;
			temp = a;
			a = b;
			b = temp;
		}
		printf("%d\n", lcm(a, b));
	}


	return 0;
}

int mult_min(int a, int b)
{





	return mult_min;
}


int lcm(int a, int b)
{
	return (a/gcd(a,b)*b);
}


int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b , a % b);


}