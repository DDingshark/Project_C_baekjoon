#include<stdio.h>
int self(int a);

int main(void)
{
	int count = 0;
	int num[10001] = { 0, };
	for (int i = 0; i <= 10000; i++)
	{
		num[i] = i;//0~10000
	}
	for (int a = 1; a<=10000; a++)
	{
		if (self(a) <= 10000)
		{
			num[self(a)] = 0;
		}
		else
			continue;
	}

	for (int i = 1; i <= 10000; i++)
	{
		if(num[i]!=0)
		{
			printf("%d\n", i);
		}
	}



	return 0;
}

int self(int a)
{
	int p1, p2, p3, p4, b;

	p1 = a % 10;
	p2 = (a / 10) % 10;
	p3 = (a / 100) % 10;
	p4 = (a / 1000) % 10;



	return b=p1+p2+p3+p4+a;
}

/* 결과가 10000이나올때까지 self 값 저장 but 2개 있는건? 
넉넉하게 11000?*/