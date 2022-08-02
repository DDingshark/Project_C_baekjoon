#include<iostream>
using namespace std;
/*
	- 와 | 로 이루어진 바닥장식
	- -  -> 1개
	|
	|  ->1개

	첫줄 방에 크기 세로 N 가로 M 입력
	두번째부터 장식모양 입력
	N,M <=50
*/
int main()
{
	int n, m,i,j,count=0;
	cin >> n;
	cin>>m;
	char** wood;
	wood = new char* [n];
	for (int i = 0; i < n; i++)
	{
		wood[i] = new char[m];
	}


	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			char element;
			cin >> element;
			wood[i][j] = element;

		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (wood[i][j] == '0')
			{
				continue;
			}
			else if (wood[i][j] == '-')
			{
				int a(i);
				int b(j);
				while (1)
				{
					if (b + 1 < m && wood[a][b + 1] == '-')
					{
						wood[a][b + 1] = '0';
						b = b + 1;
					}
					else
					{
						count += 1;
						break;
					}
				}
			}
			else if (wood[i][j] == '|')
			{
				int a(i);
				int b(j);
				while (1)
				{
					if (a + 1 < n && wood[a + 1][b] == '|')
					{
						wood[a + 1][b] = '0';
						a = a + 1;

					}
					else
					{
						count += 1;
						break;
					}
				}
			}
		}
	}

	cout << count<< endl;
	return 0;
}