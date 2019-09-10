#include<iostream>
#include<math.h>
using namespace std;

int INF = 0x3f3f3f3f;

int main()
{
	int e[10][10],k,n,m,t1,t2,t3;
	
	cin >> n >> m;

	for(int i = 1;i < n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			if(i == j) e[i][j] = 0;
			else e[i][j] = INF;
		}
	}

	//读入边
	for(int i = 1;i <= m;i++)
	{
		cin >> t1 >> t2 >> t3;
		e[t1][t2] = t3;
	}

	//弗洛伊德 算法核心
	for(int k = 1;k <= n;k++)
	{
		for(int i = 1;i <= n;i++)
		{
			for(int j = 1;j <= n;j++)
			{
				if(e[i][j] > e[i][k] + e[k][j]) 
				{
					e[i][j] = e[i][k] + e[k][j];
				}
			}
		}
	}

	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)  printf("%10d",e[i][j]);
		cout << endl;
	}

	return 0;
}
