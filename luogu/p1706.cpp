#include<cstdio>

using namespace std;

int a[15];
int book[15];
int n;
void dfs(int sum);
int main( )
{
	scanf( "%d",&n);
//		a[1] = i;
//		book[i] = 1;
		dfs(1);
//		book[i] = 0;

	return 0;
}

void dfs(int sum)
{
	if(sum == n+1)
	{
		for(int i = 1;i <= n;i++)
		{
			printf( "%5d",a[i]);
		}
		printf( "\n");
		return ;
	}

	for(int j = 1;j <= n;j++)
	{
		if(book[j] == 0)
		{
			a[sum] = j;
			book[j] = 1;
			dfs(sum+1);
			book[j] = 0;
		}
	}

	return ;
}
