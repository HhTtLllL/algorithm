#include<cstdio>
#include<cstring>

using namespace std;

int pre[30005];     
int sum[30005];

int join(int x,int y);
int find(int x);
int main( )
{
	int n,m;
	while(( scanf( "%d%d",&n,&m)) && n != 0)
	{
		//初始化
		for(int i = 0;i < n;i++) 
		{
			pre[i] = i;
			sum[i] = 1;   //每一个 成员都能单独 是一个 
		}
		while(m--)
		{
			int t;
			int a,b;
			scanf( "%d",&t);
			scanf( "%d",&a);
			t--;
			while(t--)
			{
				scanf( "%d",&b);
				join(a,b);    //将 第一个 和 剩下的相连(合并)
			}
		}
		printf( "%d\n",sum[find(0)]);

	}
}

int join(int x,int y)
{
	int tx = find(x);
	int ty = find(y);

	if(tx != ty)
	{
		pre[ty] = tx;
		sum[tx] += sum[ty];
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
