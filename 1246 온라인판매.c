// m<50���� �ڿ����� �̷���� ����
// �ڿ��� n
// |N-xyz|�� �ּڰ�
//ù�ٿ� n<1000 s<50(������ ����)




#include<stdio.h>

int main(void)
{
	int n, m,sol_min=1111111111111,sol;
	scnaf_s("%d %d", &n, &m);
	int set_s[50] = { 0, };
	if (m == 0)
	{
		char a = getchar();
	}
	else
	{
		for (int i = 0; i < m; i++)
		{
			int k;
			scanf_s("%d", &k);
			set_z[i] = k;
		}
	}


	for (int x = 1; x < 1000; x++)
	{
		for (int y = 2; y < 999; y++)
		{
			for (int z = 3; z < 998); z++)
			{
				for (int k = 0; k < m; k++)
				{
					if (x == set_z[k] || y == set_s[k] || z == set_[k])
					{
						break;

					}
					else
					{
						sol = n - (x * y * z);
						if (sol < 0)
						{
							sol *= -1;
						}
						if (sol < sol_min)
						{
							sol_min = sol;
						}
					}
				}
			}
		}
	}

	// ���ձ��� �Է� �Ϸ�

	printf("%d", sol_min);
	return 0;
}
