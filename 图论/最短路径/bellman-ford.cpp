#include<iostream>

using namespace std;

const int INF = 0x3f3f3f3f;

int main()
{
	int dis[10],i,k,n,m,u[10],v[10],w[10],flag,check;
	cin >> n >> m;

	for(i = 1;i <= m;i++)  cin >> u[i] >> v[i] >> w[i];

	//初始化 dis数组,这里是 1 号顶点到其余各个顶点的初始路程
	for(i = 1;i <= n;i++)  dis[i] = INF;
	dis[1] = 0;

	for(k = 1;k <= n-1;k++)
	{
		check = 0;
		for(i = 1;i <= m;i++)
		{
			if(dis[v[i]] > dis[u[i]] + w[i])   
			{
				dis[v[i]]  = dis[u[i]] + w[i];
				check = 1;   // 数组dis 发生更新,改变check的值
			}
		}

		// 松弛完毕后检测数组 dis 是否有更新
		if(check == 0) break;  // 如果数组dis 没有更新,提前退出循环,结束算法
	}

	flag = 0;

	for(i = 1;i <= m;i++)  if(dis[v[i]] > dis[u[i]] + w[i]) flag = 1;
	
	if(flag == 1)  printf("此图含有负权回路\n");
	else
	{
		// 输出最重结果
		for(i = 1;i <= n;i++)  cout << dis[i] << " ";
	}



	return 0;
}
