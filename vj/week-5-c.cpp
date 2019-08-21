#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;

double w[105];
int v[105];
double dp[10005];    //存放的是安全的概率
int sum;
int main ()
{
	int t;
	scanf( "%d",&t);
	while(t--)
	{
		memset(w,0,sizeof(w));
		memset(v,0,sizeof(v));
		memset(dp,0,sizeof(dp));

		double temp;     //被抓的概率
		int n,m,sum = 0;
		scanf( "%lf%d",&temp,&n);
	//	m = temp*100;
		for(int i = 0;i < n;i++)
		{
			scanf( "%d%lf",&v[i],&w[i]);
			sum += v[i];    //算出总钱数,用总钱数做背包
			w[i] = 1 - w[i];    //转化为 安全概率
		}
		dp[0] = 1;

		for(int i = 0;i < n;i++)
		{
			for(int j = sum;j >= v[i];j--)
			{
				dp[j] = max(dp[j],dp[j - v[i]]*w[i]);
			}
		}

		temp = 1 - temp;
		for(int i = sum;i >= 0;i--)
		{
			if(dp[i] > temp)
			{
				printf( "%d\n",i);
				break;
			}
		}
/*		for(int i = 1;i <= m;i++)
			printf( "%d",dp[i]);
		printf( "\n");*/

	}

}
