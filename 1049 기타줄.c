// ��Ÿ�� n<=100 ���� cut
// ��Ű�� or 1����

// ��Ÿ�� �귣�� m<=50 , ��Ű������ �������� <=1000 ������� �Է�

// �ʿ��� ���� ���� �ּҷ�

//�� �귣�忡�� ���ʿ�� X
#include<stdio.h>

#pragma warning(disable:4996)
int main()
{
	int n, m, min_pack,min_each;
	int cost_pack[50] = { 0, };
	int cost_each[50] = { 0, };

	scanf("%d %d", &n, &m);

	// ��Ÿ�� ������ �귣�� m��
	//��Ű���� 6���� ����
	int pack = n / 6;
	int each = n % 6;

	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &cost_pack[i], &cost_each[i]);
	}
	// ��Ű��, ���� ���� �迭 �Է�

	min_pack=9999;
	min_each = 9999;
	for (int i = 0; i < m; i++)
	{
		if (min_pack >= cost_pack[i])
		{
			min_pack = cost_pack[i];
		}
	}
	for (int i = 0; i < m; i++)
	{
		if (min_each >= cost_each[i])
		{
			min_each = cost_each[i];
		}
	}

	// ���� �� ��Ű�� Ȯ��
	
	if (min_pack <= min_each * each)
	{
		pack++;
		each = 0;
	}
	else if (min_pack >= (min_each * 6))
	{
		pack = 0;
		each = n;
	}

	printf("%d", (min_pack * pack) + (min_each * each));







	return 0;
}