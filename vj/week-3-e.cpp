#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>

using namespace std;


int next1[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
struct node
{
	int x,y;
	int cur;
};

void bfs(int x,int y);
int n,m,strx,stry,endx,endy,k;
int book[105][105];
char a[105][105];
int main( )
{
	int t;
	scanf( "%d",&t);
	while(t--)
	{
		memset(a,0,sizeof(a));
		memset(book,0,sizeof(book));

		scanf( "%d%d",&m,&n);

		getchar( );
		for(int i = 1;i <= m;i++)
		{
			for(int j = 1;j <= n;j++)
			{
				scanf( "%c",&a[i][j]);
			}
			getchar( );
		}
		scanf( "%d",&k);
		scanf( "%d%d%d%d",&stry,&strx,&endy,&endx);

		bfs(strx,stry);
	}


	return 0;
}


void bfs(int x,int y)
{
	struct node front;
	book[x][y] = 1;
	queue<node> q;
        front.x = x;
	front.y = y;
	front.cur = -1;

	q.push(front);
	while(!q.empty( ))
	{

		front = q.front( );
		if(front.cur >= k)   break;
		q.pop( );
		struct node temp;
		for(int i = 0;i < 4;i++)
		{
			
			temp.x = front.x + next1[i][0];
			temp.y = front.y + next1[i][1];
			temp.cur = front.cur + 1;
			while(1)
			{
		//		while(temp.x < 0 || temp.x > n || temp.y < 0 || temp.y > m)  continue;
				if(temp.x > 0  && temp.x <= m && temp.y > 0 && temp.y <= n && a[temp.x][temp.y] == '.')
				{
					if(temp.x == endx && temp.y == endy)
					{
						printf( "yes\n");
						return ;
					}

					if(book[temp.x][temp.y] == 0)
					{
						book[temp.x][temp.y] = 1;
						q.push(temp);
					}

					temp.x += next1[i][0];    //沿着这个方向 一直走
					temp.y += next1[i][1];
				}
				else break;
			}
		}
	
	}

	printf( "no\n");
}
