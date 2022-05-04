//ÁÖ»çÀ§ 3°³ ´øÁü, °°Àº´« 3°³ -> 10,000+ ´«*1000
//						  2°³ -> 1000+ ´«*100
//						  0°³ -> Å«´« *100

// input -> ´« ÁÖ¾îÁü

//out put -> »ó±Ý¸¸
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