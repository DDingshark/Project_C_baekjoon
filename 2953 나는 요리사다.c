//201801667 �۸���
/*
�� �ټ� �� �ٿ� �� �����ڰ� ���� �� ���� �� ������ �������� ���еǾ� �־�����. ù ��° �����ں��� �ټ� ��° �����ڱ��� ������� �־�����. �׻� ����ڰ� ������ ��츸 �Է����� �־�����.

���
ù° �ٿ� ������� ��ȣ�� �װ� ���� ������ ����Ѵ�.


*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
int main(void)
{ 
	int score;
	int cook1_arr[4] = { 0, };
	int cook2_arr[4] = { 0, };
	int cook3_arr[4] = { 0, };
	int cook4_arr[4] = { 0, };
	int cook5_arr[4] = { 0, };
	int score_arr[5] = { 0, };
	for (int a = 0; a < 4; a++)
	{
		scanf_s("%d", &score);
		cook1_arr[a] = score;
	}


	for (int a = 0; a < 4; a++)
	{

		scanf_s("%d", &score);
		cook2_arr[a] = score;;
	}
	for (int a = 0; a < 4; a++)
	{

		scanf_s("%d", &score);
		cook3_arr[a] = score;
	}
	for (int a = 0; a < 4; a++)
	{

		scanf_s("%d", &score);
		cook4_arr[a] = score;
	}
	for (int a = 0; a < 4; a++)
	{

		scanf_s("%d", &score);
		cook5_arr[a] = score;
	}

	for (int a = 0; a < 4; a++)
	{
		score_arr[0] = cook1_arr[a]+score_arr[0];
		score_arr[1] = cook2_arr[a]+score_arr[1];
		score_arr[2] = cook3_arr[a]+score_arr[2];
		score_arr[3] = cook4_arr[a]+ score_arr[3];
		score_arr[4] = cook5_arr[a]+ score_arr[4];
	}
	int max = score_arr[0];
	int cooker = 1;
	for (int a = 0; a <= 4; a++)
	{
		if (max <= score_arr[a])
		{
			max = score_arr[a];
			cooker = a + 1;
		}
	}

	printf("%d %d", cooker, max);
	return 0;
}