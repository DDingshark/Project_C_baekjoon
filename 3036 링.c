// �� ���� 3<=~<=100

//�� ���� 1<= ~ <=1000

//ù��°���� �ѹ��� ������ ������ ���� �����?


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

	// ���� ->2 r pi / 2r_2pi
	// r/r_1 �� ���м���
	// ���μ� ����? 
	int r_1 = cir[0];
	for (int i = 1; i < n; i++) // r2~rn ���� ������
	{
		if (r_1 == 1)
		{
			for (int i = 1; i < n; i++) 
			{
				printf("%d/%d\n", 1, cir[i]);
			}
			break;
		}

		for (int j = 2; j <= 10; j++) //���μ� ã��
		{


			if (cir[0] % j == 0 && cir[i] %j == 0) //���� ���ÿ� �������� 0 = ����� �Ǹ� but j =1 ?
			{
				cir[0] = cir[0] / j; // ��а��
				cir[i] = cir[i] / j; // ��а��

				if (cir[0] == 1) //j�� �ᱹ �������� �� ����������
				{
					cir_top[i] = cir[0]; //���ڴ� ����� ��
					cir_bottom[i] = cir[i]; // �ڽ����� ������ 1;
					cir[0] = r_1;
					j = 1;//�ٽ� 2���� 
					printf("%d/%d\n", cir_top[i], cir_bottom[i]);
					break;
				}
				else if (cir[i] == 1)
				{
					cir_top[i] = cir[0];
					cir_bottom[i] = cir[i];
					cir[0] = r_1;
					j = 1;//�ٽ� 2����
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