#include<cstdio>
#include<algorithm>

using namespace std;
int find(int x);
int join(int x,int y);
int pre[200005];
int a[200005];
int main( )
{
	int n,m;
	scanf( "%d%d",&n,&m);

	for(int i = 1;i <= n;i++)	pre[i] = i;
	
	for(int i = 1;i <= m;i++)
	{
		int temp,x,y;
		scanf( "%d%d%d",&temp,&x,&y);

		if(temp == 1)	join(x,y);
		else
		{
			int tx = find(x);
			int ty = find(y);
			if(tx == ty)	printf( "Y\n");
			else  printf( "N\n");

		}
	}
}

int find(int x)
{
	if(x == pre[x])   return x;
	else
	{
		pre[x] = find(pre[x]);
		return pre[x];
	}
}

int join(int x,int y)
{
	int tx = find(x);
	int ty = find(y);

	if(tx != ty)
	{
		pre[ty] = tx;
		return 1;
	}
	return 0;
}
