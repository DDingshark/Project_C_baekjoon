// n! �߿��� �ڿ������� ó�� 0�� �ƴѼ��� ���ö��� ������ 0�ǰ���


#include<stdio.h>
#pragma warning(disable:4996)


int main()
{
	int n;
	int num_2=0;
	int num_5=0;
	scanf("%d", &n);

	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		int k = i%2;
		int p=i/2;
		while (k == 0 && p!=0) //������ ��������, 0�̾ƴ� 
		{
			num_2 +=1;
			k =p% 2;
			p /= 2;

		}
		int j = i%5;
		int l = i / 5;
		while (j == 0 && l!=0) // ������ ��������, 0�̾ƴ�
		{
			num_5 += 1;
			j = l % 5;
			l /= 5;

		}

	}
	//25�� �� +2? -> j = 0 i = 5  
	if (num_2 <= num_5)
	{
		num_2 = num_2;
	}
	else if (num_2 > num_5)
	{
		num_2 = num_5;
	}

	printf("%d", num_2);







	return 0;
}

