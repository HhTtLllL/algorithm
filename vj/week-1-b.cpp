#include<cstdio>
#include<cstring>
int next1[8][2] = {{1,0},{-1,0},{0,1},{0,-1},{-1,-1},{-1,1},{1,-1},{1,1}};
int num;
int n,m;
void dfs(int beginx,int beginy);
char a[105][105] = {0};
int main( )
{
	scanf( "%d%d",&n,&m);
	char ch;
	while(getchar( ) != '\n');
	while(m != 0)
	{
		memset(a,0,sizeof(a));
		for(int i = 1;i <= n;i++) 
		{
			for(int j = 1;j <= m;j++) 
			{
				scanf( "%c",&a[i][j]);
			}
			getchar( );
		}
		for(int i = 1;i <= n;i++)   for(int j = 1;j <= m;j++)
						{
							if(a[i][j] == '@')
							{
								num++;
								dfs(i,j);
							}
						}
		printf( "%d\n",num);
		num = 0;
		scanf( "%d%d",&n,&m);
		while(getchar( ) != '\n');
	}

}

void dfs(int beginx,int beginy)
{

	int tx,ty;
	for(int k = 0;k <= 7;k++)
	{
		tx = beginx + next1[k][0];
		ty = beginy + next1[k][1];

		if(tx < 1 || tx > n || ty < 1 || ty > m)    continue;

		if(a[tx][ty] == '@')
		{
			a[tx][ty] = '*';
			dfs(tx,ty);
		}
	}
}
