#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

const int maxn = 1000 + 10;

double dp[maxn][maxn];
int n,s;


int main()
{
	while(~scanf("%d%d",&n,&s))
	{
		dp[n][s] = 0;
		for(int i = n;i >= 0;i--)
		{
			for(int j = s;j >= 0;j--)
			{
				if(i == n && j == s) continue;
				double temp = n*s - i*j;
				double p1 = n*s;
				double p2 = i * (s - j);
				double p3 = (n - i) * j;
				double p4 = (n - i) * (s - j);

				dp[i][j] = (p1/temp + p2/temp*dp[i][j + 1] + p3/temp*dp[i + 1][j] + p4/temp*dp[i + 1][j+1]);

			}
		}

		printf("%.4f\n",dp[0][0]);
//		printf("1111\n");
	}


	return 0;
}
