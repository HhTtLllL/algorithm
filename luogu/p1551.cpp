#include<cstdio>
#include<cstring>

using namespace std;

int pre[5005];

int join(int x,int y);
int find(int x);
int main()
{
	int n,m,p;
	scanf( "%d%d%d",&n,&m,&p);

	for(int i = 1;i <= n;i++)   pre[i] = i;
	for(int i = 1;i <= m;i++)
	{
		int x,y;
		scanf( "%d%d",&x,&y);

		join(x,y);
	}

	for(int i = 1;i <= p;i++)
	{
		int x,y;
		scanf( "%d%d",&x,&y);
		if(find(x) == find(y))   printf( "Yes\n");
		else   printf( "No\n");
	}


	return 0;
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
