// 单源点 最短路    指定一个点到其余各个顶点的最短路径

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int e[10][10],dis[10],book[10],i,j,n,m,t1,t2,t3,u,v,min;

	int inf = 0x3f3f3f3f;

	cin >> n >> m;
	//初始化
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			if(i == j) e[i][j] = 0;
			else e[i][j] = inf;
		}
	}

	for(int i = 1;i <= m;i++)
	{
		cin >> t1 >> t2 >> t3;
		e[t1][t2] = t3;
	}

	//初始化 dis 数组,这里是 1 号顶点到其余各个顶点的初始路程  假设单源起点 为 1
	//结点 1 直接到其余结点的 距离
	
	for(int i = 1;i <= n;i++)  dis[i] = e[1][i];

	//book数组初始化
	for(int i = 1;i <= n;i++) book[i] = 0;
	book[1] = 1;

	//dijkstra算法核心语句
	
	for(int i = 1;i <= n - 1;i++)    //循环 n - 1 次.
	{
		//找到离 1 号顶点最近的顶点
		min = inf;
		for(int j = 1;j <= n;j++)
		{
			if(book[j] == 0 && dis[j] < min)  //如果没有选过这一点, 并且 比 min还要小的话
			{
				min = dis[j];
				u = j;
			}
		}
		// 选出 编号为 u 的顶点
		book[u] = 1;
		for(v = 1;v <= n;v++)  //遍历每一个节点u -> v 的每一个结点
		{
			if(e[u][v] < inf)
			{
				if(dis[v] > dis[u] + e[u][v])   dis[v] = dis[u] + e[u][v];
			}
		}

		//输出最终的结果
	}
	
	for(int i = 1;i <= n;i++)  cout <<  dis[i] << " ";

	


	return 0;
}
