#include<cstdio>
#include<queue>

using namespace std;
int a[6][6];
int book[6][6];
struct node
{
	int x;  //横
	int y;  // 纵
	int f; //父亲在队列中的编号
	int step;  //步数
};
int next1[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
int main( )
{
	for(int i = 0;i < 5;i++)     for(int j = 0;j < 5;j++)    scanf( "%d",&a[i][j]);
	queue<node> s;
	
	struct node temp;
	temp.x = 0;
	temp.y = 0;
	temp.f = 0;
	temp.step = 1;
	book[0][0] = 1;
	s.push(temp);
	int head = 1;
	int flag = 0;
	int tx,ty;
	while(!s.empty( ))
	{
		for(int k = 0;k < 4;k++)
		{
			tx = s.front( ).x + next1[k][0];
			ty = s.front( ).y + next1[k][1];

			if((tx < 0 || tx > 4 || ty < 0 || ty > 4))    continue;

			if(a[tx][ty] == 0 && book[tx][ty] == 0)
			{
				book[tx][ty] = 1;
				temp.x = tx;
				temp.y = ty;
				temp.f = head;
				temp.step = s.front( ).step + 1;

				s.push(temp);
			}

			if(tx == 4 && ty == 4)
			{
				flag = 1;
				break;
			}
		}
		printf( "%d  ,   %d    %d \n",s.front( ).x,s.front( ).y,s.front( ).f);

		if(flag == 1)
		{
			while(!s.empty( ))
			{
				s.pop( );
				printf( "%d  ,   %d    %d \n",s.front( ).x,s.front( ).y,s.front( ).f);

			}

			break;
		}
		head++;
		s.pop( );
	}


}
