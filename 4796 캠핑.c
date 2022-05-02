//연속하는 p일중 ㅣ일동안 사용가능, v짜리 휴가시작
//최대몇일? , 1<L<P<V
// 0 0 0 입력시 끝
#include<stdio.h>
int main(void)
{
	int l, p, v,day,d_day,vac,count=0;
	while (1)
	{
		day = 0;
		d_day = 0;
		vac = 0;
		scanf_s("%d %d %d", &l, &p, &v);
		if (l == 0 && p == 0 && v == 0)
		{
			break;
		}

		while (v!=0)//day 사용가능한 d_day휴가남은날
		{
			if (v >= p)
			{
				v =v- p;
				day += l;
			}
			else if (v >= l && v < p)
			{
				v = 0;
				day += l;
			}
			else if (v < l && v< p)
			{
				day += v;
				v = 0;
			}
		}
		count++;
		printf("Case %d: %d\n", count, day);

	}













	return 0;
}