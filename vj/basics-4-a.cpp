#include<cstdio>
#include<queue>
#include<cstring>

using namespace std;

void init( );
void bfs(int i,int j);
int next1[8][2] = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{-1,-1},{1,-1},{-1,1}};
char a[105][105];
int book[105][105];
int sum;
struct node
{
	int x;
	int y;
};
int n,m;
int main( )
{
	while(scanf( "%d%d",&n,&m) == 2 && n != 0)
	{
		init( );
		while(getchar( ) != '\n');
		for(int i = 0;i < n;i++)
		{
			for(int j = 0;j < m;j++)
			{
				scanf( "%c",&a[i][j]);
			}
			while(getchar( ) != '\n');
		}
	
		for(int i = 0;i < n;i++)
		{
			for(int j = 0;j < m;j++)
			{
				if(a[i][j] == '@')
				{
					sum++;
					bfs(i,j);
				}
			}
		}

		printf( "%d\n",sum);
	}
}

void init( )
{
	memset(a,0,sizeof(a));
	memset(book,0,sizeof(book));
	sum = 0;
}
void bfs(int i,int j)
{

	queue<node> s;
	struct node temp;
	temp.x = i;
	temp.y = j;
	book[i][j] = 1;
	s.push(temp);
	while(!s.empty( ))
	{
		struct node front = s.front( );
		s.pop( );
		for(int k = 0;k < 8;k++)
		{
			int tx = front.x + next1[k][0];
			int ty = front.y + next1[k][1];


			if(tx < 0 || tx > n || ty < 0 || ty > m)    continue;

			if(a[tx][ty] == '@' && book[tx][ty] == 0)
			{
				book[tx][ty] = 1;
				a[tx][ty] = 0;
				temp.x = tx;
				temp.y = ty;
				s.push(temp);
			}
		}
	}
}
