#include<cstdio>
#include<queue>
#include<cstring>

using namespace std;

char a[1005][1005];
int book[1005][1005];
int next1[4][2] = {
    {0,1},
    {1,0},
    {0,-1},
    {-1,0}};
struct node
{
    int x;
    int y;
};
int bfs(int x,int y,int step);
queue<node> s;
int n,m;
int main()
{

    int x,y;
    int step = 0;

    scanf("%d%d",&n,&m);
    while(getchar() != '\n');
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n;j++)
        {
            scanf("%c",&a[i][j]);
        }
   	 while(getchar() != '\n');
    }
    
    for(int i = 0;i < m;i++)
    {
        scanf("%d%d",&x,&y);
        book[x][y] = 1;
        step = bfs(x,y,0);
        printf("%d\n",step);
        memset(book,0,sizeof(book));
        
    }
    
}

int bfs(int x,int y,int step)
{
    int tx,ty;
    struct node temp;
    int temp3;
    temp.x = x;
    temp.y = y;

    s.push(temp);
    
    while(!s.empty())
    {
        //枚举四个方向
        for(int i = 0;i < 4;i++)
        {
            //计算下一步的坐标 
            tx = s.front().x + next1[i][0];
            ty = s.front().y + next1[i][1];
            //判断是否越界 
            if(tx < 1 || tx > n || ty < 1 || ty > n )	continue;
	   if(a[s.front( ).x][s.front( ).y] != a[tx][ty] && book[tx][ty] == 0)
	   {
		book[tx][ty] = 1;
		temp.x = tx;
		temp.y = ty;
		s.push(temp);
	   }
        }
        step++;
        s.pop(); 
    }
    return step;
}
