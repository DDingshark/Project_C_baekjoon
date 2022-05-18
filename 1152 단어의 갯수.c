
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void)
{
	int last = 0; char ch;
	char* p;
	p = (char*)malloc(sizeof(char));
	if (p == NULL)
		exit(1);
	while (1)
	{
		if ((ch = getchar()) == '\n')
			break;

		else
		{
			*(p + last) = ch;
			last++;
			p = (char*)realloc(p, (last + 1) * sizeof(char));
		}
		if (p == NULL)
			exit(1);
	}

	int count = 1;

	for(int i =0;i<last;i++)
	{
		if (*(p + i) == ' ')
		{
			count++;
		}
	}

	if (p[0] == ' ')
	{
		count -= 1;
	}
	if (p[last - 1] == ' ')
	{
		count -= 1;
	}

	printf("%d", count);


	return 0;
}
