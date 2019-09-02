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
				int p1 = (n - i) * (s - j)*1.0;
				int p2 = (n - i) * j * 1.0;
				int p3 = i * (s - j) * 1.0;
				int p4 = i * j * 1.0;
				dp[i][j] = (p1*dp[i + 1][j + 1] + p2*dp[i+1][j] + p3*dp[i][j+1] + n *s);

			}
		}

		printf("%.4lf\n",dp[0][0]);
//		printf("1111\n");
	}


	return 0;
}
