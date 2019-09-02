#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

const int MAXN = 1000 + 10;

double dp[MAXN];

int main()
{
	int kase;
	cin >> kase;
	while(kase--)
	{
		memset(dp,0,sizeof(dp));
		double n;
		cin >> n;
		for(int i = n;i >= 0;i--)
		{
			if(i == n) continue;
			dp[i] = (n/(n-i)) + dp[i+1];
		}
		printf( "%.2lf\n",dp[0]);
	}

	return 0;
}
