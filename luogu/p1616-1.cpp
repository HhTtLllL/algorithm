// 完全背包

#include<cstdio>
#include<iostream>

using namespace std;
int a[11111111];
//int a[1005][100001];
int weight[100005];
int value[100005];

//精简一维 
int main( )
{
	int sumweight,sumnum;
	cin >> sumweight >> sumnum;
	for(int i = 1;i <= sumnum;i++)  scanf( "%d%d",&weight[i],&value[i]);
						//逆序
	for(int i = 1;i <= sumnum;i++)	for( int j = weight[i];j <= sumweight;j++)	/*if(j >= weight[i])*/ a[j] = max(a[j],a[j-weight[i]] + value[i]);
					//	j 代表的是 背包的容量                    //遍历
	printf( "%d",a[sumweight]);
}








// 二维
/*
int main( )
{
	int sumweight,sumnum;
	cin >> sumweight >> sumnum;
	for(int i = 1;i <= sumnum;i++)   scanf( "%d%d",&weight[i],&value[i]);

	for(int i = 1;i <= sumnum;i++)    //遍历 个数
	{ 
		for(int c = 0;c <= sumweight;c++) //背包的载荷能力
		{
			for(int k = 0;k*weight[i] <= c;k++)   //决策
			{
				//状态转移方程
				a[i][c] = max(a[i][c],a[i-1][c - k*weight[i]] + k*value[i]);
			}
		}
	}
	printf( "%d",a[sumnum][sumweight]);
}*/
