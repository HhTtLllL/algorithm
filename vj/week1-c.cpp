#include<cstdio>
#include<cstring>

using namespace std;

char a[20][20];
void queen(int j);
int biaoji[10];
int n,k;
int sum;
int kind;
void dfs(int i,int num);
int main( )
{
	scanf( "%d%d",&n,&k);
	while(getchar( ) != '\n');
	while(n != -1 && k != -1)
	{
		for(int i = 0;i < n;i++)
		{
			scanf( "%s",a[i]);
//			while(getchar( ) != '\n');
		}
//		queen(0);   
		for(int i = 0;i <= n-k;i++)
		{
			dfs(i,k);
		}
		printf( "%d\n",kind);

		scanf( "%d%d",&n,&k);
//		while(getchar( ) != '\n');
		memset(a,0,sizeof(a));
		memset(biaoji,0,sizeof(biaoji));
		kind = 0;
	}

}

void dfs(int i,int num)
{
	for(int j = 0;j < n;j++)
	{
		if(a[i][j] == '#' && biaoji[j] == 0)
		{
		
			if(num == 1)  kind++;
			else
			{
				biaoji[j] = 1;
				for(int l = i+1;l < n-num+2;l++)
				{
					dfs(l,num-1);
				}
				biaoji[j] = 0;
			}
		}
	}
}


/*
void queen(int j)
{
	if(num == k)
	{
		sum++;
		return;
	}
	else
	{
		for(int i = j;i < n;i++)
		{
			for(int l = 0;l < n;l++)
			if(a[i][l] == '#' && biaoji[l] == 0)
			{
				num++;
				biaoji[i] = 1;
				queen(i + 1);
				biaoji[i] = 0;
				num--;
			}
		}
	}
}
*/
