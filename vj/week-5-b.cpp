#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;

int w[1000];
int v[1000];
int dp[1000][1000];

int dp2[1000];
int n,s;

int main( )
{
	int t;
	scanf( "%d",&t);
	while(t--)
	{
		memset(w,0,sizeof(w));
		memset(v,0,sizeof(v));
		memset(dp,0,sizeof(dp));

		scanf( "%d%d",&n,&s);
		for(int i = 1;i <= n;i++)   scanf( "%d",&v[i]);
		for(int i = 1;i <= n;i++)   scanf( "%d",&w[i]);

		for(int i = 1;i <= n;i++)
		{
			for(int j = s;j >= 0;j--)
			{
				/*if(w[i] > j)	dp[i][j] = dp[i-1][j];
				else	dp[i][j] = max(dp[i-1][j - w[i]] + v[i],dp[i-1][j]);*/
				if(j >= w[i])
				dp2[j] = max(dp2[j],dp2[j - w[i]] + v[i]);
			}
		}
		printf( "%d\n",dp2[s]);
//		printf( "%d\n",dp[n][s]);
	}

}
