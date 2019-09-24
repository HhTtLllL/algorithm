// 佛罗益达 版子题


#include<iostream>

using namespace std;

const int MAX =  200 + 10;
const int INF = 0x3f3f3f3f;

int a[MAX][MAX];

int main()
{
	int n;
	cin >> n;
	//初始化
	for(int i = 1;i <= 200;i++)
	{
		for(int j = 1;j <= 200;j++)
		{
			a[i][j] = INF;
		}
	}

	for(int i = 1;i <= n-1;i++)
	{
		for(int j = i+1;j <= n;j++)
		{
			cin >> a[i][j];
		}
	}


	for(int k = 1;k <= n;k++)
	{
		for(int i = 1;i <= n;i++)
		{
			for(int j = 1;j <= n;j++)
			{
				if(a[i][j] > a[i][k] + a[k][j])  a[i][j] = a[i][k] + a[k][j];
			}
		}
	}

	cout << a[1][n] << endl;



	return 0;
}
