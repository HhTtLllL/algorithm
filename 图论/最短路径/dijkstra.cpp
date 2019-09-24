// 单源点 最短路    指定一个点到其余各个顶点的最短路径

#include<stdio.h>
#include<iostream>

using namespace std;


const int INF = 0x3f3f3f3f;
int main()
{

	int e[10][10],dis[10],book[10],i,j,n,m,t1,t2,t3,u,v,min;
	cin >> n >> m;

	// 初始化
	for(i = 1;i <= n;i++)
	{
		for(j = 1;j <= n;j++)
		{
			if(i == j) e[i][j] = 0;
			else e[i][j] = INF;
		}
	}

	//　读入边
	for(i = 1;i <= m;i++)
	{
		cin >> t1 >> t2 >> t3;
		e[t1][t2] = t3;
	}


	//初始化 dis 数组
	for(i = 1;i <= n;i++)
	{
		dis[i] = e[1][i];
	}

	for(i = 1;i <= n;i++) book[i] = 0;    book[1] = 1;

	// dijkstra 
	for(i = 1;i <= n-1;i++)  //用来控制次数
	{
		// 找到离 1 号顶点最近的顶点
		min = INF;
		for(j = 1;j <= n;j++)
		{
			// 如果这一个点没有走过 并且  第j个点 小于 min
			if(book[j] == 0 && dis[j] < min)
			{
				min = dis[j];
				u = j;
			}
		}

		book[u] = 1;  // 标记这个点已经走过
		
		// 从最短的路径出发,查看是否 有 用  这一点  可以优化的边.
		for(v = 1;v <= n;v++)
		{
			if(e[u][v] < INF)
			{
				if(dis[v] > dis[u] + e[u][v])   dis[v] = dis[u] + e[u][v];
			}
		}
	}

	for(i = 1;i <= n;i++) cout << dis[i] << " ";

	return 0;
}
