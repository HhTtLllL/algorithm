#include<cstdio>
#include<algorithm>

using namespace std;
//将所有城镇间的连接保存到结构体，然后按照权值从小到大排序遍历，权值相加，直到最后连通为止。
struct node 
{
	int x;
	int y;
	int z;
}a[5000];   //记录边的个数
int pre[105];   //记录村庄的个数

//int join(node a,node b);
int cmp(node a,node b);
int sum = 0;
int find(int x);
int main( )
{
	int n;
	while((scanf( "%d",&n)) && n!= 0)
	{
		sum = 0;
		int num = n*(n-1)/2;
		for(int i = 1;i <= n;i++)   pre[i] = i;

		for(int i = 1;i <= num;i++)    scanf( "%d%d%d",&a[i].x,&a[i].y,&a[i].z);

		sort(a+1,a+1+num,cmp);

		for(int i = 1;i <= num;i++)
		{
			int x = find(a[i].x);
			int y = find(a[i].y);
			if(x != y)
			{
				pre[y] = x;
				sum += a[i].z;
			}
		}

		printf( "%d\n",sum);
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
int cmp(node a,node b)
{
	return a.z< b.z;
}
/*
int join(node a,node b)
{
	int tx = find(x);
	int ty = find(y);
	if(tx != ty)
	{
		pre[ty] = tx;
		s += 1;
	}

}*/
