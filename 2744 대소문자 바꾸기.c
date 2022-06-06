#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[100];
	scanf_s("%s", str, sizeof(str));
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if ((int)str[i] < 97)
		{
			str[i] += 32;
		}
		else
		{
			str[i] -= 32;
		}
	}

	printf("%s", str);


	return 0;
}