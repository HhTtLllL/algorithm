#include<cstdio>

using namespace std;
typedef struct node
{
	int x;
	int y;
	int pre;
}queue;

int next1[4][2] = {{-1,0},{1,0},{0,1},{0,-1}};
queue s[30];
int front = 0;
int rear = 0;

int book[6][6];
int a[6][6];
void print(queue now);
void bfs(int beginx,int beginy);
int main( )
{
	for(int i = 0;i < 5;i++)   for(int j = 0;j < 5;j++)   scanf( "%d",&a[i][j]);
	
	bfs(0,0);

	print(s[rear-1]);

}


void bfs(int beginx,int beginy)
{
	int flag = 0;
	int tx,ty;
	book[beginx][beginy] = 1;
	s[front].x = beginx;
	s[front].y = beginy;
	s[front].pre  = -1;

	rear = rear + 1;

	while(front < rear)
	{
		for(int k = 0;k < 4;k++)
		{
			tx = s[front].x + next1[k][0];
			ty = s[front].y + next1[k][1];

			if(tx < 0 || tx > 4 || ty < 0 | ty > 4)   continue;

			if(a[tx][ty] == 0 && book[tx][ty] == 0)
			{
				book[tx][ty] = 1;
				s[rear].x = tx;
				s[rear].y = ty;
				s[rear].pre = front;
				rear++;

				if(tx == 4 && ty == 4)
				{
					flag = 1;
					break;
				}
			}
		}
		
		if(flag == 1)   break;
		front++;   //将队列中的第一个元素移出 队列
	}

	return ;

}


void print(queue now)
{
	if(now.pre == -1)    printf( "(%d, %d)\n",now.x,now.y);
	else
	{
		print(s[now.pre]);
		printf( "(%d, %d)\n",now.x,now.y);
	}
}
