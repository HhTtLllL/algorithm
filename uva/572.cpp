/*
GeoSurvComp地质调查公司负责检测地下石油储量。
GeoSurvComp一次与一个大的矩形区域一起工作，并创建一个划分的网格
土地变成无数平方土地。 然后，它使用传感设备分别分析每个图
确定该地块是否含有油。
含有油的地块称为口袋。 如果两个口袋相邻，那么它们就是它的一部分
同样的石油储备。 油沉积物可能非常大并且可能包含许多口袋。 你的工作是
确定网格中包含多少不同的油藏。*/

#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string.h>

using namespace std;

	int m,n;
char a[105][105];
int book[105][105];
int next1[8][2] = {{1,0},{-1,0},{1,1},{-1,-1},{0,-1},{0,1},{1,-1},{-1,1}};
int dfs(int x,int y)
{
	for(int i = 0;i < 8;i++)
	{

		int tempx = x + next1[i][0];
		int tempy = y + next1[i][1];
		if(tempx >= 0 && tempx < n && tempy >= 0 && tempy < m && a[tempx][tempy] == '@')
		{
			if(book[tempx][tempy] == 0)
			{
				book[tempx][tempy] = 1;
				dfs(tempx,tempy);
			}
		}
	}

	return 0;
}
int main( )
{
	int cnt = 0;
	while(cin >> n >> m && m)
	{
		cnt = 0;
		memset(book,0,sizeof(book));

		for(int i = 0;i < n;i++)   scanf( "%s",a[i]);

		for(int i = 0;i < n;i++)
		{
			for(int j = 0;j < m;j++)
			{
				if(book[i][j] != 1 && a[i][j] == '@')
				{
					cnt++;
					book[i][j] = 1;
					dfs(i,j);
				
				}
			}
		}
	cout << cnt << endl;
	}

}

