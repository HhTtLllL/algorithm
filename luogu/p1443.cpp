#include<cstdio>
#include<queue>
#include<cstring>
using namespace std;
struct node
{
	int x;
	int y;
	int step;
};
int a[405][405];
int book[405][405];
queue<node> s;
int next1[8][2] = {{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1},{-2,1},{-1,2}};
int main( )
{
	int n,m,x,y;
	struct node strat;
	scanf( "%d%d%d%d",&n,&m,&x,&y);
	memset(a,-1,sizeof(a));
	strat.x = x;
	strat.y = y;
	strat.step = 0;
	book[x][y] = 1;
	s.push(strat);
	while(!s.empty( ))
	{
		a[s.front( ).x][s.front( ).y] = s.front( ).step;

		for(int k = 0;k < 8;k++)
		{
			int tx = s.front( ).x + next1[k][0];
			int ty = s.front( ).y + next1[k][1];
			int tstep = s.front( ).step+1;
			if(tx < 1 || tx > n || ty < 1 || ty > m)   continue;
			
			if(book[tx][ty] == 0)
			{
				book[tx][ty] = 1;
				strat.x = tx;
				strat.y = ty;
				strat.step = tstep;
				s.push(strat);
			}

		}
		s.pop( );

	}


	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= m;j++)
		{
			if(i == x && j == y)
			{
				printf( "%-5d",0);
				continue;
			}
			else printf( "%-5d",a[i][j]);
		}
		printf( "\n");
	}
}
