#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int a[105][105];
int dp[105][105];

int main( )
{
        int t;
        scanf( "%d",&t);

        while(t--)
        {
                memset(a,0,sizeof(a));
                memset(dp,0,sizeof(dp));
    
                int n;
                scanf( "%d",&n);

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

		for(int i = n;i >= 1;i--)
		{
			for(int j = 1;j <= i;j++)
			{
				printf("%d ",dp[i][j]);
			}
			printf("\n");
		}

                printf( "%d\n",dp[1][1]);                                                                                                                                                                   


        }
}
