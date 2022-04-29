#include<stdio.h>
//테스트 케이스
// 처음에 학생수 2입력부터 점수(올0있을지도)
// 평균넘는 학생의 비율을 반올림하여 3자리까지 출력

int main(void)
{
	int n;
	scanf_s("%d", &n);
	int arr_score[1001] = {0,};
	// 테스트 케이스만큼 반복
	for (int i = 0; i < n; i++)
	{
		int k = 0;
		scanf_s("%d", &k);
		arr_score[0] = k;
		int sum = 0;
		double average = 0;
		double count = 0;
		// 학생 수만큼 반복
		for (int j = 1; j <= k; j++)
		{
			int p;
			scanf_s("%d", &p);
			arr_score[j] = p;
			sum += arr_score[j];
		}
		//올 0이면 0출력
		average = (double)sum / arr_score[0];
		for (int m = 1; m <= arr_score[0]; m++)
		{
			if (average < arr_score[m])
			{
				count++;
			}
		}
		printf("%.3f%%\n", 100*count / arr_score[0]);




	}




	return 0;
}