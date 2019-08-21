#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;

int dp[2][100005];
int s1[100005],s2[100005];

int main(){
 	int n;
	scanf( "%d",&n);
        for(int i = 1;i <= n;i++)   scanf( "%d",&s1[i]);

	for(int i = 1;i <= n;i++)  scanf( "%d",&s2[i]);

        for(int i=1;i<=n;i++)
            for(int j = 1;j <= n;j++)
	    {
                if(s1[i-1] == s2[j-1])
		{
                    int temp = dp[(i-1)%2][j-1]+1;   
                    dp[i%2][j] = max(dp[i%2][j],temp);
                }
                else dp[i%2][j] = max(dp[(i-1)%2][j],dp[i%2][j-1]);
            }
        printf( "%d\n",dp[n%2][n]);
    return 0;
}
