#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[101];
	scanf_s("%s", str, sizeof(str));
	int len = strlen(str);
	int i = 0;
	while (i + 10 <= len)
	{
		for (int j = i; j < i+10; j++)
		{
			printf("%c", str[j]);
		}
		printf("\n");
		i += 10;
	}
	if (i + 10 > len)
	{
		for (int j = i; j < len; j++)
		{
			printf("%c", str[j]);
		}
	}



	return 0;
}