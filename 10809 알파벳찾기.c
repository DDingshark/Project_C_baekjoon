/*
�Է�
ù° �ٿ� �ܾ� S�� �־�����. �ܾ��� ���̴� 100�� ���� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.

���
������ ���ĺ��� ���ؼ�, a�� ó�� �����ϴ� ��ġ, b�� ó�� �����ϴ� ��ġ, ... z�� ó�� �����ϴ� ��ġ�� �������� �����ؼ� ����Ѵ�.

����, � ���ĺ��� �ܾ ���ԵǾ� ���� �ʴٸ� -1�� ����Ѵ�. �ܾ��� ù ��° ���ڴ� 0��° ��ġ�̰�, �� ��° ���ڴ� 1��° ��ġ�̴�.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char text_arr[101] = { 0, };
	char alpa[27] = { "abcdefghijklmnopqrstuvwxyz" };
	int position[26] = { 0, };
	for (int i = 0; i < 26; i++)
	{
		int k = -1;
		position[i] = k;
	}

	scanf_s("%s", text_arr,sizeof(text_arr));
	int len = strlen(text_arr);
	for (int i = 0; i < len; i++)
	{
		for (int p = 0; p < 26; p++)
		{
			if (text_arr[i] == alpa[p]&&position[p]==-1)
			{
				position[p] = i;
			}
		}
	}

	for (int o = 0; o <= 25; o++)
	{
		printf("%d ", position[o]);
	}
	return 0;
}