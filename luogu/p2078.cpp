#include<cstdio>
#include<string>

using namespace std;

int sum1[20005];
int sum2[20005];
int pre1[10005];
int pre2[10005];

int find2(int x);
int join2(int x,int y);
int join1(int x,int y);
int find1(int x);
int main()
{
	int n,m,p,q;
	scanf( "%d%d%d%d",&n,&m,&p,&q);
	for(int i = 1;i <= n;i++)
	{
		pre1[i] = i;
		sum1[i] = 1;
	}
	for(int i = 1;i <= m;i++)
	{
		pre2[i] = i;
		sum2[i] = 1;
	}

	for(int i = 1;i <= p;i++)
	{
		int x,y;
		scanf( "%d%d",&x,&y);
		join1(x,y);
	}
	for(int i = 1;i <= q;i++)
	{
		int x,y;
		scanf( "%d%d",&x,&y);
		join2(-1*x,-1*y);
	}

	int a = sum1[find1(1)];
	int b = sum2[find2(1)];

	if(a > b)   printf( "%d\n",b);
	else    printf( "%d\n",a);

	return 0;
}

int join1(int x,int y)
{
	int tx = find1(x);
	int ty = find1(y);

	if(tx != ty)
	{
		pre1[ty] = tx;
		sum1[tx] += sum1[ty];
	}

	return 0;
}

int find1(int x)
{
	int temp = x;
	while(temp != pre1[temp])
	{
		temp = pre1[temp];
	}

	return temp;
}
int join2(int x,int y)
{
	int tx = find2(x);
	int ty = find2(y);

	if(tx != ty)
	{
		pre2[ty] = tx;
		sum2[tx] += sum2[ty];
	}

	return 0;
}

int find2(int x)
{
	int temp = x;
	while(temp != pre2[temp])
	{
		temp = pre2[temp];
	}

	return temp;
}
