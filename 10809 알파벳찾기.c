/*
입력
첫째 줄에 단어 S가 주어진다. 단어의 길이는 100을 넘지 않으며, 알파벳 소문자로만 이루어져 있다.

출력
각각의 알파벳에 대해서, a가 처음 등장하는 위치, b가 처음 등장하는 위치, ... z가 처음 등장하는 위치를 공백으로 구분해서 출력한다.

만약, 어떤 알파벳이 단어에 포함되어 있지 않다면 -1을 출력한다. 단어의 첫 번째 글자는 0번째 위치이고, 두 번째 글자는 1번째 위치이다.
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