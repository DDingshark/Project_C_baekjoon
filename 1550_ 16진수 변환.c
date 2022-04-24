//16진수 수를 입력받아서 10진수로 출력하는 프로그램을 작성하시오.
#include <stdio.h>
#include <math.h>
#include<string.h>


int main(void)
{
	char num_arr[7];
	scanf_s("%s", num_arr, sizeof(num_arr));
	
	int len = strlen(num_arr);
	int position = 0;
	int sol = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		char number = num_arr[i];

		if (number >= 48 && number <= 57)//아스키 코드에서 10 =48~
		{
			sol += (number - 48) * pow(16, position);

		}
		else if (number >= 65 && number <= 70)//A = 65~
		{
			sol += (number - 55) * pow(16, position);

		}
		else if (number >= 97 && number >= 102)//a = 97~
		{
			sol += (number - 87) * pow(16, position);

		}
		position++;
	}
	

	printf("%d\n", sol);



	return 0;
}