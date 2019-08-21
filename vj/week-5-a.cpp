#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int a[105][105];
int dp[105][105];
int main( )
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);

		for(int i = 1;i <= n;i++)
		{
			for(int j = 1;j <= i;j++)
			{
				scanf( "%d",&a[i][j]);
			}
		}

		for(int i = n;i >= 1;i--)
		{
			for(int j = 1;j <= i;j++)
			{
				dp[i][j] = max(dp[i+1][j],dp[i+1][j+1]) + a[i][j];
			}
		}

		printf( "%d\n",dp[1][1]);
	}
}
