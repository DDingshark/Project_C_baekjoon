#include<stdio.h>

//과목수 입력<=1000
//성적 입력(올0 제외)
// 점수= (점수/최고점)*100
//첫줄 평균 출력
int main(void)
{
	int n;
	double sum=0, average;
	int max =0;
	int score[1000] = { 0, };
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int sc;
		scanf_s("%d", &sc);
		if (max < sc)
		{
			max = sc;
		}
		score[i] = sc;
	}
	// 성적 입력 + 최고점 탐색

	for (int i = 0; i < n; i++)
	{
		sum += ((double)score[i] / max) * 100;
	}
	average = sum / n;
	printf("%f", average);
	



	return 0;
}