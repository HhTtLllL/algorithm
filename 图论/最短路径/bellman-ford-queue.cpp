#include<iostream>
#include<queue>


using namespace std;

const int INF = 0x3f3f3f3f;
int main()
{
	int n,m,i,j,k;
	// u,v,w 的数组大小要根据./
	int u[8],v[8],w[8];

	int first[6],next[6];

	int dis[6] = {0},book[6] = {0};   //book 数组用来记录那些顶点已经在队列中

	int que[101] = {0},head = 1,tail = 1;  //定义一个队列,并初始爱护队列
	cin >> n >> m;

	for(i = 1;i <= n;i++)  dis[i] = INF;
	dis[1] = 0;
	
	for(i = 1;i <= n;i++)  book[i] = 0;
	//初始化book 数组,初始化为 0,因为刚才是都不在队列中
	for(i = 1;i <= n;i++)  first[i] = -1;

	for(i = 1;i <= m;i++)
	{
		cin >> u[i]  >> v[i] >> w[i];
		//  下面两句是邻接表的关键
		next[i] = first[u[i]];
		first[u[i]] = i;
	}

	// 1 号顶点入队
	que[tail] = 1;  tail++;
	book[1] = 1;  //标记 1 号顶点已经入队
	while(head < tail)  //队列不为空
	{
		k = first[que[head]];  //当前需要处理的队首顶点
		while(k != -1)  // 烧苗当前顶点所有的边
		{
			if(dis[v[k]] > dis[u[k]] + w[k])  //更新顶点 1 到顶点 v[k] 的路程
			{	
				dis[v[k]] = dis[u[k]] + w[k];
				//这的book数组用来判断顶点v[k] 是否在队列中
				//如果不使用一个数组来标记的化,判断一个顶点是否在队列中每次需要从队列的head 到tail扫一遍,很浪费时间
				if(book[v[k]] == 0)  // 0 表示不在队列中,将顶点v[k] 加入队列中
				{
					// 下面两句是入队操作 
					que[tail] = v[k];
					tail++;
					book[v[k]] = 1;  // 同时标记顶点v[k] 已经入队
				}
			}
			k = next[k];
		}
		//出队
		book[que[head]] = 0;
		head++;
	}
	
	// 输出 1 号顶点到其余各个顶点的最短路径
	for(i = 1;i <= n;i++)   cout << dis[i] << " ";

	return 0;
 }
