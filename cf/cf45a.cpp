#include<cstdio>

using namespace std;

void dfs(int x,int y,int temp);
int next1[4][2] = {{1,0},{0,1},{-1,0,},{0,-1}};
char a[105][105];
int n,m;
int main( )
{
	scanf( "%d%d",&n,&m);
	getchar( );
	for(int i = 0;i < n;i++)
	{
		scanf( "%s",a[i]);
		getchar( );
	}

	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < m;j++)
		{
			if(a[i][j] == '.')
			{
				dfs(i,j,1);
			}
		}
	}


	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < m;j++)
		{
			printf( "%c",a[i][j]);
		}
		printf( "\n");
	}
}

void dfs(int x,int y,int temp)
{
	if(x < 0 || x > n || y < 0 || y > m)  return ;

	if(temp == 0)   a[x][y] = 'W';
	else   a[x][y] = 'B';

	for(int k = 0;k < 4;k++)
	{
		int tx = x + next1[k][0];
		int ty = y + next1[k][1];

		if(a[tx][ty] == '.')
		{
			if(temp == 0)   dfs(tx,ty,1);
			else dfs(tx,ty,0);
		}
	}
}
