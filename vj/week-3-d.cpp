#include<cstdio>
#include<cstring>

using namespace std;

int pre[50005];

int join(int x,int y);
int find(int x);
int main( )
{
	int t = 0;
	int n,m;
	while((scanf( "%d%d",&n,&m)) && n != 0)
	{
		memset(pre,0,sizeof(pre));
		t++;
		for(int i = 1;i <= n;i++)  pre[i] = i;

		while(m--)
		{
			int x,y;
			scanf( "%d%d",&x,&y);
			join(x,y);
		}
		int sum = 0;
		for(int i = 1;i <= n;i++)
		{
			if(i == pre[i])
			{
				sum++;
			}
		}
		printf( "Case %d: %d\n",t,sum);
	}

}

int join(int x,int y)
{
	int tx = find(x);
	int ty = find(y);
	if(tx != ty)
	{
		pre[tx] = ty;
	}

	return 0;
}

int find(int x)
{
	int temp = x;
	while(temp != pre[temp])
	{
		temp = pre[temp];
	}

	return temp;
}
