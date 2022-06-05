#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//(의 수랑 )의 수가 같으면 가능?
//이해 완료 (의수보다 )수가 작으면 x 
int main()
{
	int n;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int count_l = 0, count_r = 0, debug = 0;
		char str[51];
		scanf_s("%s", str,sizeof(str));
		int len = strlen(str);
		for (int i = 0; i < len; i++)
		{
			if (str[i] == '(')
			{
				count_l += 1;
			}
			else if(str[i] == ')')
			{
				count_r += 1;
			}
			if (count_r > count_l)
			{
				printf("NO\n");
				debug = 1;
				break;
			}
		}

		if (count_l == count_r)
		{
			printf("YES\n");
		}
		else if(debug ==1)
		{
			continue;
		}
		else
		{
			printf("NO\n");
		}
	}


	return 0;
}
