#include <stdio.h>
#define MAX 100

struct node
{
	int x,y;
};
int cnt;
node a[MAX];
int G[MAX][MAX];

int n,m;
int isInside(node a,node b)
{
	if(a.x < b.x && a.y < b.y || a.y < b.x && a.x < b.y)    return 1;
	else return 0;
}

int dp(int row,int length)
{
	cnt = (length > cnt) ? length : cnt;
	for(int i = 1;i <= n;i++)
	{
		if(G[row][i] == 1)
		{
			dp(i,length + 1);
		}
	}

	return 0;
}


int main()
{
	scanf("%d",&n);
	for(int i = 1;i <= n;i++)
	{
		scanf("%d%d",&a[i].x,&a[i].y);
	}


	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			G[i][j] = isInside(a[i],a[j]);
		}
	}

	int max = 0;
	for(int i = 1;i <= n;i++)
	{
		cnt = 0;
		dp(i,1);
		max = (cnt > max) ? cnt : max;
	}

	printf("max = %d\n",max);


	return 0;
}
