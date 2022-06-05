#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//떨어져서 나오면 안된다... 
//이전거 저장 , 다음것이 나왔는대 0번째나온
//것이 아닌대 이전거랑 다르다 
int main()
{
	int n,count,word_g=0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int alpa[28] = { 0, };
		count = 0;
		char str[101];
		scanf_s("%s", str, sizeof(str));
		int len = strlen(str);
		alpa[27] = -1;
		for (int j = 0; j < len; j++)
		{
			int k = (int)str[j] - 97;
			if (alpa[k] != 0 && alpa[27] != k)
			{
				count += 1;
			}
			alpa[k] += 1;
			alpa[27] = k;
		}
		if (count == 0)
		{
			word_g += 1;
		}
	}
	printf("%d", word_g);
	return 0;
}
