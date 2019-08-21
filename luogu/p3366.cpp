#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;
struct node
{
	int x,y;
	long long z;
}a[200005];
int num = 0;
int pre[5005];
long long sum;
int n,m;
int find(int x);
int cmp(node a,node b);
void kruskal( );
int main( )
{
	scanf( "%d%d",&n,&m);
	for(int i = 1;i <= n;i++)    pre[i] = i;
	for(int i = 1;i <= m;i++)   scanf( "%d%d%lld",&a[i].x,&a[i].y,&a[i].z);

	sort(a+1,a+m+1,cmp);   //将 权值从小到大 排序

	kruskal();  //生成树


	printf( "%lld\n",sum);

	return 0;

}


int cmp(node a,node b)
{
	return a.z < b.z;
}

void kruskal( )
{
	for(int i = 1;i <= m;i++)
	{
		int tx = find(a[i].x);
		int ty = find(a[i].y);
		if(tx != ty)
		{
			num++;
			pre[ty] = tx;   //合并
			sum += a[i].z;  
		}

		if(num == n-1)  break;
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
