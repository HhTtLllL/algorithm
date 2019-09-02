#include<stdio.h>
#include<string.h>
const int mm=1005;
double dp[mm][mm];
int main()
{
    int n,s;
    while(~scanf("%d %d",&n,&s))
    {
        memset(dp,0,sizeof(dp));
        int i,j;
        for( i=n;i>=0;i--)
          for( j=s;j>=0;j--)
          {
                if(i==n&&j==s)
                continue; 
            double p1=i*j*1.0/(n*s);
            double p2=(n-i)*j*1.0/(n*s);
            double p3=(s-j)*i*1.0/(n*s);
            double p4=(n-i)*(s-j)*1.0/(n*s);
            dp[i][j]=(p1*dp[i][j]+p2*dp[i+1][j]+p3*dp[i][j+1]+p4*dp[i+1][j+1]+1)/(1-p1);
          }

        printf("%.4lf\n",dp[0][0]);
    }
    return 0;
} 
