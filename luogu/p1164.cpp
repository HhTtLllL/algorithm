#include<cstdio>
#include<algorithm>

using namespace std;

//可能是记忆化搜索
int a[105];
int f[105][10005];
int main( )
{
	int n,m;
	scanf( "%d%d",&n,&m);

	for(int i = 1;i <= n;i++)   scanf( "%d",&a[i]);

	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= m;j++)
		{
			if(j == a[i])   f[i][j] = f[i-1][j] + 1;    // 
			if(j > a[i])    f[i][j] = f[i-1][j] + f[i-1][j-a[i]];
			if(j < a[i])    f[i][j] = f[i-1][j];
		}
	}
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= m;j++)
			printf( "%d ",f[i][j]);
		printf( "\n");
	}
	printf( "%d\n",f[n][m]);
}

