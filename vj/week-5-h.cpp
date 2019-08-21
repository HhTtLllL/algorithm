#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;

int dp[105][105];
int a[105][105];
int next1[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
int n,m;

int dfs(int x,int y);
int main( )
{
	scanf( "%d%d",&n,&m);
	for(int i = 1;i <= n;i++)   for(int j = 1;j <= m;j++)   scanf( "%d",&a[i][j]);
	int ans = 0;

	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= m;j++)
		{
			dp[i][j] = dfs(i,j);
			ans = max(ans,dp[i][j]);
			printf( "%d\n",ans);
		}
	}

	printf( "%d\n",ans);

}

int dfs(int x,int y)
{
	if(dp[x][y] != 0)    return dp[x][y];

	int maxt = 1;
	int t;
	for(int i = 0;i < 4;i++)
	{
		int tx = x + next1[i][0];
		int ty = y + next1[i][1];

		if(tx < 0 || tx > n || ty < 0 || ty > m)   continue;

		if(a[tx][ty] > a[x][y])
		{
			t = dfs(tx,ty) + 1;   //先递归找到　　在上　下　左　　右，最大的一个　，然后赋值为　１　．
			maxt = max(t,maxt);
		}
	}

	dp[x][y] = maxt;

	return maxt;
}
