#include<stdio.h>
#include<queue>

using namespace std;
struct node
{
	int x;
	int y;
};
int Next[4][2] = {
	{0,1},
	{1,0},
	{0,-1},
	{-1,0}};
int a[35][35];
int book[35][35];
queue<node> s;
int bfs(int x,int y);
int tx,ty,n;
int main()
{
	scanf("%d",&n);
	for(int i = 0;i < n;i++)	for(int j = 0;j < n;j++)	scanf("%d",&a[i][j]);
	
	for(int i = 0;i < n;i++)
	{
		if(a[i][0] == 0 && book[i][0] == 0)
		{
			book[i][0] = 1;
			a[i][0] = -1;
			bfs(i,0);	
		}
	}
	
	
		for(int i = 0;i < n;i++)
			{
				if(a[i][n-1] == 0 && book[i][n-1] == 0)
				{
					book[i][n-1] = 1;
					a[i][n-1] = -1;
					bfs(i,n-1);	
				}
			}
	
	
			for(int i = 0;i < n;i++)
			{
				if(a[0][i] == 0 && book[0][i] == 0)
				{
					book[0][i] = 1;
					a[0][i] = -1;
					bfs(0,i);	
				}
			}
	
	
			for(int i = 0;i < n;i++)
			{
				if(a[n-1][i] == 0 && book[n-1][i] == 0)
				{
					book[n-1][i] = 1;
					a[n-1][i] = -1;
					bfs(n-1,i);	
				}
			}
	
	
		for(int i = 0;i < n;i++)
		{
			for(int j = 0;j < n;j++)
			{
				if(a[i][j] == -1)	printf("0 ");
				if(a[i][j] == 0)	printf("2 ");
				if(a[i][j] == 1)	printf("1 ");
			}
			printf("\n");
		}

	
	 
	
}
int bfs(int x,int y)
{
	struct node temp;
	temp.x = x;
	temp.y = y;
	s.push(temp);
	int k;
	while(!s.empty())
	{
		//枚举4个方向 
		for(k = 0;k < 4;k++)
		{
			//计算下一个坐标
			tx = s.front().x + Next[k][0];
			ty = s.front().y + Next[k][1];
			
			if(tx < 1 || tx > n || ty < 1 || ty > n)	continue;
			
			//判断是否是0
			
			if(a[tx][ty] == 0 && book[tx][ty] == 0)
			{
				book[tx][ty] = 1;
				a[tx][ty] = -1;
				temp.x = tx;
				temp.y = ty;
				s.push(temp);	
			}
		}
		s.pop();
	}
}
