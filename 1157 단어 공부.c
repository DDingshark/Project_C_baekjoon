
#include<stdio.h>
#include<stdlib.h>


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


	*(p + last) = '\0';
	


	int arr[26] = { 0, };

	for (int i = 0; i < last; i++)
	{
		if (*(p + i) >= 'a')
		{
			*(p + i) -= 32;
		}


		int k = *(p + i)-65;
		arr[k] += 1;
	}


	int max = arr[0], max_alpa = 65, count = 0;
	for (int i = 1; i < 26; i++)
	{
		if (arr[i] != 0)
		{
			if (arr[i] > max)
			{
				count = 0;
				max_alpa = i + 65;
				max = arr[i];
			}

			else if (arr[i] == max)
			{
				count++;
			}
		}
	}



	if (count == 0)
	{
		printf("%c",max_alpa);
	}

	else if (count != 0)
	{
		printf("?");
	}




	return 0;
}
