#include<cstdio>

using namespace std;

long long  a[1005];
long long  b[1005];
long long  sum = 0;
int n;
void dfs(int x,int y);
int main( )
{
	scanf( "%d",&n);
	for(int i = 1;i <= n;i++)   scanf( "%lld",&a[i]);

	for(int i = 1;i <= n;i++)
	{
		b[1] = a[i];
		dfs(a[i],1);
	}

}

void dfs(int x,int y)
{
	if(y == n)
	{
		
		for(int i = 1;i <= n;i++)   printf( "%lld ",b[i]);
		printf( "\n");
		return ;
	}

	for(int i = 1;i <= n;i++)
	{
		if(a[i] == x*2)
		{      
			b[y+1] = a[i];
			dfs(a[i],y+1);
		}
	}

	for(int i = 1;i <= n;i++)
	{
		if(a[i] / 3 == x)
		{
			b[y+1] = a[i];
			dfs(a[i],y+1);
		}
	}
}
