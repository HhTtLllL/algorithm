#include<cstdio>
#include<queue>
#include<cstring>

using namespace std;

int min1 = 999999999;
int sum1;
int objective[20000][2];
int num;
int next1[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
char a[205][205];
int book[205][205];
int n,m;
struct node
{
	int x;
	int y;
	int step;
};
int main( )
{
	int start1,start2,end1,end2;
	while(scanf( "%d%d",&n,&m) != EOF)
	{
		
		getchar( );
		num = 0;
		min1 = 99999999;
		struct node st1;
		struct node st2;
		for(int i = 1;i <= n;i++)
		{
			for(int j = 1;j <= m;j++)
			{
				scanf( "%c",&a[i][j]);
				if(a[i][j] == 'Y')
				{
					st1.x = i;
					st1.y = j;
				}
				if(a[i][j] == 'M')
				{
					st2.x = i;
					st2.y = j;
				}
				if(a[i][j] == '@')
				{
					objective[num][0] = i;
					objective[num][1] = j;
					num++;
				}
			}
		
			getchar( );
		}

		num--;
		while(num >= 0)
		{
			queue<node> s;
			st1.step = 0;
			st2.step = 0;
			s.push(st1);
			memset(book,0,sizeof(book));
			while(!s.empty( ))
			{
				struct node front = s.front( );
				s.pop( );
				book[st1.x][st1.y] = 1;
	
				if(front.x == objective[num][0]  && front.y == objective[num][1])
				{
					sum1 += front.step;
					break;
				}
				for(int k = 0;k < 4;k++)
				{
					int tx = front.x + next1[k][0];
					int ty = front.y + next1[k][1];
	
					if(tx < 1 || tx > n || ty < 1 || ty > m)   continue;
	
					if(book[tx][ty] == 0  && a[tx][ty] != '#')
					{
						struct node temp;
						book[tx][ty] = 1;
						temp.x = tx;
						temp.y = ty;
						temp.step = front.step + 11;
						s.push(temp);
					}
				}
			}
			if(sum1 >= min1)   continue;

			memset(book,0,sizeof(book));
			queue<node> s1;
			s1.push(st2);

			while(!s1.empty( ))
			{
				struct node front = s1.front( );
				s1.pop( );
				book[st2.x][st2.y] = 1;
	
				if(front.x == objective[num][0] && front.y == objective[num][1])
				{
					sum1 += front.step;
					break;
				}

				for(int k = 0;k < 4;k++)
				{
					int tx = front.x + next1[k][0];
					int ty = front.y + next1[k][1];

					if(tx < 1 || tx > n || ty < 1 || ty > m)    continue;
	
					if(book[tx][ty] == 0 && a[tx][ty] != '#')
					{
						struct node temp;
						book[tx][ty] = 1;
						temp.x = tx;
						temp.y = ty;
						temp.step = front.step + 11;
						s1.push(temp);
					}
				}
			}
	
			min1 = min(min1,sum1);
			num--;
			sum1 = 0;
		}

		printf( "%d\n",min1);
	}
}
