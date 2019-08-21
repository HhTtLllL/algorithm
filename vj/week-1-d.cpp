#include<cstdio>
#include<cstring>
#include<queue>

using namespace std;

char a[35][35][35];
int book[35][35][35];
int next1[6][3] = {{0,1,0},{0,-1,0},{0,0,1},{0,0,-1},{1,0,0},{-1,0,0}};
struct node
{
	int x;
	int y;
	int z;
	int step;
};
struct node begin1;
struct node end1;
struct node jump;

int deep,row,col;
int main( )
{
	while((scanf( "%d%d%d",&deep,&row,&col)) == 3 && deep != 0 &&  row != 0 && col != 0)
	{
		memset(a,0,sizeof(a));
		memset(book,0,sizeof(book));
	//	getchar( );
		for(int i = 1;i <= deep;i++ )
		{
			getchar( );
			for(int j = 1;j <= row;j++)
			{
				for(int k = 1;k <= col;k++)
				{
					scanf( "%c",&a[i][j][k]);
					if(a[i][j][k] == 'S')
					{
						begin1.x = i;
						begin1.y = j;
						begin1.z = k;
						begin1.step = 0;
					}
					else if(a[i][j][k] == 'E')
					{
						end1.x = i;
						end1.y = j;
						end1.z = k;
					}
				}
				getchar( );
			}
		}
		

		struct node temp;
		struct node front;
		queue<node> s;
		s.push(begin1);
		while(!s.empty( ))
		{
			front.x =s.front( ).x;
			front.y = s.front( ).y;
			front.z = s.front( ).z;
			front.step = s.front( ).step;
			if(s.front( ).x == end1.x && s.front( ).y == end1.y && s.front( ).z == end1.z)     break;
			else
			{
				book[front.x][front.y][front.z] = 1;

				for(int k = 0;k < 6;k++)
				{
					int tx = front.x + next1[k][0];
					int ty = front.y + next1[k][1];
					int tz = front.z + next1[k][2];

					if(tx < 1 || tx > deep || ty < 1 || ty > row || tz < 1 || tz > col )   continue;

					if(book[tx][ty][tz] == 0 && a[tx][ty][tz] != '#')
					{
						temp.x = tx;
						temp.y = ty;
						temp.z = tz;
						temp.step = front.step+1;
						book[tx][ty][tz] = 1;
						s.push(temp);
					}
				}
			}

			s.pop( );
		}
		if(front.x == end1.x && front.y == end1.y && front.z == end1.z)	   printf("Escaped in %d minute(s).\n",front.step);
		else   printf( "Trapped!\n");
		
	}


	return 0;
}

