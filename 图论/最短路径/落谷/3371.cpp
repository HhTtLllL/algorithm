#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n,m,i,j,k;

	//u,v,w,的数组大小要根据实际情况来设置,要比m 的最大值要大一
	int u[8],v[8],w[8];

	//first 要比 n 的最大值要大 1,next要比 m 的最大值要大 1
	int first[6],next[8];

	int dis[6] = {0},book[6] = {0};//book数组用来记录那些顶点已经在队列中
	
	int que[101] = {0},head = 1,tail = 1; //定义一个队列,并初始化队列
	
	int inf = 0x3f3f3f3f; //用 inf 存储一个我们认为的正无穷值
	//读入 n.m表示顶点个数,m 表示边的条数
	scanf("%d%d",&n,&m);

	//初始化dis数组,这里是 1 号 顶点到期与各个顶点的初始路程	
	for(int i = 1;i <= n;i++)  dis[i] = inf;
	dis[1] = 0;

	//初始化book 数组,初始化为 0,刚开始都不在队列中
	
	//初始化 first 数组小标 1 ~ n的值为 -1,表示 1 ~ n顶点暂时都没有边
	//建立邻接表时需要
	for(int i = 1;i <= n;i++) first[i] = -1;  

	for(int i = 1;i <= m;i++)
	{
		//读入每一条边
		cin >> u[i] >> v[i] >> w[i];
		
		//建立邻接表
		next[i] = first[u[i]];  //把第一条边 往后移一条
		first[u[i]] = i;       // 然后放一条新边 给 first
	}

	//1 号顶点入队
	que[tail] = 1,tail++;
	book[1] = 1; //标记1 号顶点已经入队
	while(head < tail) // 队列不为空的时候循环
	{
		k = first[que[head]]; //当前需要处理的队首顶点
		while(k != -1)
		{
			if(dis[v[k]] > dis[u[k]] + w[k])  //判断是否松弛成功
			{
				dis[v[k]] = dis[u[k]] + w[k]; //如果可以松动,则更新顶点 1,到顶点v[k] 的路程
				//这的book数组用来判断顶点v[k]是否在队列中
				//如果不适用一个数组来标记的化,判断一个顶点是否在队列中每次都需要从队列的head 到 tail 扫一遍,浪费时间
				if(book[v[k]] == 0) //0 表示不在队列中,将顶点 v[k] 加入队列中
				{
					//下面两句是入队操作
					que[tail] = v[k];
					tail++;
					book[v[k]] = 1; //同事标记顶点 v[k] 已经入队
				}
			}

			k = next[k];
		}

		//出队
		book[que[head]] = 0;
		head++;
	}

	//输出 1 好顶点到其余各个顶点的最短路径
	for(int i = 1;i <= n;i++)   cout << dis[i] << " ";

	cout << endl;
	return 0;
}
