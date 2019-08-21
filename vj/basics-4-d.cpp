#include<cstdio>
#include<queue>
#include<cstring>

using namespace std;

int n,m;
int flag = 1;
void dfs(int i,int j,int step);
int sum = 1;
int a[27][27];
int book[27][27];
int next1[8][2] = {{1,2},{2,1},{-1,-2},{-2,-1},{1,-2},{-2,1},{-1,2},{2,-1}};
char record[1000][2];
struct node
{
	int x;
	int y;
	int step;
};
int l = 1;
int main( )
{
	int t;
	scanf( "%d",&t);
	while(t--)
	{
		memset(record,0,sizeof(record));

		scanf( "%d%d",&n,&m);
		for(int i = 1;i <= n;i++)
		{
			for(int j = 1;j <= m;j++)
			{
				flag = 1;
				book[i][j] = 1;
				record[1][0] = i;
				record[1][1] = j;
				dfs(i,j,1);
				memset(book,0,sizeof(book));
				if(flag == 0)   break;
			}
			if(flag == 0)    break;
		}

		if(flag == 0)
		{
			printf( "Scenario #%d\n",l);
			for(int i = 1;i <= n*m;i++)
			{
				char ch;
				ch = 64 + record[i][1];
				printf( "%c%d",ch,record[i][0]);
			}
			l++;
			printf( "\n");
		}
		else
		{
			printf( "Scenario #%d\n",l);
			printf( "impossible\n");
			l++;
		}
	}

}

void dfs(int i,int j,int tstep)
{


//	book[i][j] = 1;
	if(tstep == n*m)
	{
		flag = 0;
		return ;
	}

	for(int k = 0;k < 8;k++)
	{
		int tx = i + next1[k][0];
		int ty = j + next1[k][1];
		int step = tstep + 1;

		if(tx < 1 || tx > n || ty < 1 || ty > m)   continue;

		if(book[tx][ty] == 0)
		{
			book[tx][ty] = 1;
			record[step][0] = tx;
			record[step][1] = ty;
			dfs(tx,ty,step);
			book[tx][ty] = 0;
		}
	}
}
