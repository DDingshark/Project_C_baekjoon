// 201801667 �۸���

/*
9���� ���� �ٸ� �ڿ����� �־��� ��, �̵� �� �ִ��� ã�� �� �ִ��� �� ��° �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ���, ���� �ٸ� 9���� �ڿ���

3, 29, 38, 12, 57, 74, 40, 85, 61

�� �־�����, �̵� �� �ִ��� 85�̰�, �� ���� 8��° ���̴�.

*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int arr[9] = { 0, };
	int index;
	for (int i = 0; i < 9; i++)
	{
		int a;
		scanf_s("%d",&a);
		arr[i] = a;
	}
	int max = arr[0];
	for (int i = 0; i < 9; i++)
	{
		if (max <= arr[i])
		{
			max = arr[i];
			index = i;
		}

	}
	printf("%d\n%d", max, index+1);
	return 0;
}