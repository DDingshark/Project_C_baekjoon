// A��ŭ ������� , B��ŭ �������(1��� ���)
// if A= 1000, B= 70 , -> 1070���� 10�� 17000����

// C�� ���� å�� ���ʷ� ������ �߻��ϴ� ����, 
// 21��< �ڿ��� A,B,C�Է�
// ���ʷ� ���͹߻��ϴ� �Ǹŷ� , ���� x�� -1 ���



#include<stdio.h>


int main()
{
	long long a, b, c,i=0;

	scanf("%lld %lld %lld", &a, &b, &c);
	//�Է� 

	//1���� ���� = a + (�Ǹŷ�*b) < �Ǹŷ� *c ���Ǵ� ����
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