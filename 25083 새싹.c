//�ֻ��� 3�� ����, ������ 3�� -> 10,000+ ��*1000
//						  2�� -> 1000+ ��*100
//						  0�� -> ū�� *100

// input -> �� �־���

//out put -> ��ݸ�
#include<stdio.h>

int main(void)
{
	int dice_1, dice_2, dice_3;
	int max = 0;

	scanf_s("%d %d %d", &dice_1, &dice_2, &dice_3);

	if (dice_1 == dice_2 && dice_1 == dice_3)
	{
		printf("%d", 10000 + (dice_1 * 1000);
	}

	else if (dice_1 == dice_2 && dice_1 != dice_3)
	{
		printf("%d", 1000 + (dice_1 * 100));
	}
	else if (dice_1 == dice_3 && dice_1 != dice_2)
	{
		printf("%d", 1000 + (dice_1 * 100));
	}

	else if (dice_2 == dice_3 && dice_1 != dice_3)
	{
		printf("%d", 1000 + (dice_1 * 100));
	}

	else
	{
		if (dice_1 >= dice_2 && dice_1 <= dice_3)
		{
			printf("%d", dice_3 * 100);
		}

		else if (dice_1 >= dice_2 && dice_1 >= dice_3)
		{
			printf("%d", dice_1 * 100);
		}
		else if (dice_1 <= dice_2 && dice_2 >= dice_3)
		{
			printf("%d", dice_2 * 100);
		}
	}

	return 0;
}