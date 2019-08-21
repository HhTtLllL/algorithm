//并查集


#include<iostream>
#include<algorithm>
#include<stdio.h>

using namespace std;

int co[100005];
int pre[100005];

void join(int a,int b);
int find(int a);

int main()
{

	int n,m;
	long long sum = 0;
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		pre[i] = i;   //初始化 每个人自己一个人 为一个 集合
		cin >> co[i];   // 记录 每一个的费用
	}
	int a,b;
	for(int i = 1;i <= m;i++)
	{
		cin >> a >> b;   
		join(a,b);   //合并好友关系
	} 

	for(int i = 1;i <= n;i++)
	{
		if(pre[i] == i)   sum += co[i];    
	}

	cout << sum << endl;
}

void join(int a,int b)
{
	int x = find(a);   //找到自己的根
	int y = find(b);  

	if(x == y)   return ;   //如果 x, y 是 同 一个上级 不作处理
	if(co[x] > co[y])   pre[x] = y;   //让 花费 小的做上级    x 的上级 是 y
	else  pre[y] = x;
}

int find(int a)   //循环寻找 
{
	int temp = a;
	while(pre[temp] != temp)
	{
		temp = pre[temp];
	}

	return temp;
}
/*
int find(int a)
{

	if(pre[a] == a)   return a;
	else 
	{
		return pre[a] = find(pre[a]);   //递归寻找上级
	}
}*/
