#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

struct node
{
	int x,y,z;
}a[100005];
int pre[100005];
int n,m;

int t;
int sum;

void k();
int find(int x);
int cmp(node a,node b);
int main( )
{
	scanf( "%d%d",&n,&m);
	for(int i = 1;i <= n;i++)   pre[i] = i;
	for(int i = 1;i <= m;i++)   scanf( "%d%d%d",&a[i].x,&a[i].y,&a[i].z);

	sort(a+1,a+m+1,cmp);

	k();
	if(sum == n-1)
		printf( "%d\n",t);
	else
		printf( "-1\n");
}

int cmp(node a,node b)
{
	return a.z < b.z;
}

void k()
{
	for(int i = 1;i <= m;i++)
	{
		int tx = find(a[i].x);
		int ty = find(a[i].y);

		if(tx != ty)
		{
			pre[ty] = tx;
			sum++;
			t = max(t,a[i].z);
		}

		if(sum == n-1)   break;
	}
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
