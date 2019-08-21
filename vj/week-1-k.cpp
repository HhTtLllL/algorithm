#include<cstdio>
#include<cstring>
#include<queue>
#include<algorithm>

using namespace std;
struct node
{
	int x;
	int y;
	int step;
};
int ans = -1;
int next1[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};   //方向数组
int book[15][15];     //标记数组
char a[15][15];      //地图数组
int sum;        //记录草地的个数  
int sum1;    
struct node b[105];    //将所有是草地的地方入队
int n,m;
void bfs(struct node t1,struct node t2);
int main( )
{
	int t;
	scanf( "%d",&t);
	int l = 0;
	while(l < t)
	{
		
		sum = 0;
		int flag = 0;
		sum1 = 0;
		memset(b,0,sizeof(b));
		memset(a,0,sizeof(a));
		int min1 = 0x7fffffff;
		l++;
		queue<node> s;
		struct node temp;
		scanf( "%d%d",&n,&m);
		getchar( );
		for(int i = 0;i < n;i++)
		{
			for(int j = 0;j < m;j++)
			{
				scanf( "%c",&a[i][j]);
				if(a[i][j] == '#')
				{
					b[sum].x = i;
					b[sum].y = j;
					b[sum].step = 0;
					sum++;

				}
			}
			getchar( );
		}

		if(sum <= 2)
		{
			printf( "Case %d: %d\n",l,0);
			continue;
		}
		//用2 层循环 将任意两个草地进行 判断
		for(int i = 0;i < sum;i++)
		{
			for(int j = i + 1;j < sum;j++)
			{
				memset(book,0,sizeof(book));
				bfs(b[i],b[j]);

				if(sum1 == sum)    //  如果能将所有草地烧掉则符合
				{
					flag = 1;
					min1 = min(min1,ans);
				}
			}
		}

		if(flag == 0)	printf( "Case %d: %d\n",l,-1);
		else	printf( "Case %d: %d\n",l,min1);
		

	}

}

void bfs(struct node t1,struct node t2)
{
	queue<node> s;
	s.push(t1);   
	s.push(t2);

	book[t1.x][t1.y] = 1;
	book[t2.x][t2.y] = 1;

	ans = -1;

	sum1 = 2;    //在队列里 能烧到的 的草地的个数

	while(!s.empty( ))
	{
		struct node front;
		front = s.front( );
		s.pop( );
		struct node temp;
		ans = max(ans,front.step);     //更新 步数   将最大步数更新,,因为要将草地全部烧完,要以最大的时间为准
		for(int k = 0;k < 4;k++)
		{
			temp.x = front.x + next1[k][0];
			temp.y = front.y + next1[k][1];
			if(temp.x  < 0 || temp.x > n || temp.y < 0 || temp.y > m)   continue;

			if(book[temp.x][temp.y] == 0 && a[temp.x][temp.y] == '#')
			{
				book[temp.x][temp.y] = 1;
				temp.step = front.step + 1;
				s.push(temp);
				sum1++;
			}
		}
		
	}
}
