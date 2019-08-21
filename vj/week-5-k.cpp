#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>

using namespace std;

//char s1[5005],s2[5005];
int dp[2][5005];
string s1,s2;

int main( )
{
	int n;
	while((scanf( "%d",&n)) != EOF)	
	{
		cin >> s1;
		memset(dp,0,sizeof(dp));
//		for(int i = 0;i <= n;i++)  scanf( "%c",&s1[i]);
//		s1[n+1] = '\0';
		s2 = s1;

		reverse(s2.begin( ),s2.end( ));     //将字符串逆置

//		for(int i = 0;i <= n;i++)   s2[i] = s1[n-i+1];
		
		for(int i = 1;i <= n;i++)
		{
			for(int j = 1;j <= n;j++)
			{
				if(s1[i-1] == s2[j-1])
				{
					int temp = dp[(i-1)%2][j-1] + 1;
					dp[i%2][j] = max(dp[i%2][j],temp);
				}
				else
				{
					dp[i%2][j] = max(dp[(i-1)%2][j],dp[i%2][j-1]);
				}
			}
		}

		printf( "%d\n",n-dp[n%2][n]);
	}

}
