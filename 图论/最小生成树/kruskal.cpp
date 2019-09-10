#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

struct edge
{
	int u;
	int v;
	int w;
};

struct edge e[10];
int f[7] = {0},sum = 0;  // 并查集
int n,m;
int cmp(struct edge x,struct edge y)
{
	return x.w < y.w;
}

int getf(int v)
{
	if(f[v] == v)   return v;
	else 
	{
		f[v] = getf(f[v]);
		return f[v];
	}
}

int merge(int v,int u)
{
	int t1,t2;
	t1 = getf(v);
	t2 = getf(u);

	if(t1 != t2)  // 判断两个点是否在同一个集合中
	{
		f[t2] = t1;
		return 1;
	}

	return 0;
}

int main()
{
	int i;
	cin >> n >> m;
	
	int count = 0;
	for(i = 1;i <= m;i++)  cin >> e[i].u >> e[i].v >> e[i].w;
	
	sort(e + 1,e + m + 1,cmp);

	//初始化并查集
	for(i = 1;i <= n;i++) f[i] = i;


	//算法核心 
	for(i  =1;i <= m;i++)
	{
		//判断一条边的两个顶点是否已经联通,即判断是否在一个集合中  用并查集找,如果 是同一个子集,则已经联通
		if(merge(e[i].u,e[i].v))
		{
			count++;
			sum += e[i].w;
		}

		if(count == n-1) break;
	}

	cout << sum << endl;


	return 0;
}
