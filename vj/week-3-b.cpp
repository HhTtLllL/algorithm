//拓扑排序 有向无环 图 思想 :
//
//输出的 这一点  没有  前驱  
// 先 输出 入度 为 0 的点,然后删除该点  还有 这条边 ,即 它指向的 点 入度 - 1,开始循环  ,当 没有入度为 0 的点 时 ,循环结束 .
// 即 输出的数的个数 不等于 总个数    也就 代表 图 中存在一个 环
// 

#include<cstdio>
#include<cstring>
#include<queue>
#include<vector>
#define maxn  100000

using namespace std;

int rudu[maxn];
vector<int> vec[maxn];  //相当于一个动态二维数组    ,用  向量表示    存 的是 邻接矩阵
int n,m,u,v,num;
int topsort();  //拓扑排序
int main( )
{
	while((scanf( "%d%d",&n,&m)) && n != 0)
	{
		for(int i = 1;i <= n;i++)	vec[i].clear( );
		memset(rudu,0,sizeof(rudu));
		while(m--)
		{
			scanf( "%d%d",&u,&v);
			vec[u].push_back(v);   //将 v 放到 u 的后面   用向量表示 即 u 指向 v
			rudu[v]++;   // v 的入度 + 1
		}
		topsort();  
		for(int i = 0;i < m;i++)
		{
			for(int j = 0;j < vec[i].size())     /////////////////////////////////////////////////////////////////////////////
		}

		printf( "\n");
	}


	return 0;
}

int topsort()
{
	queue<int> q;   //维护一个队列

	num = 0;  //统计出队的个数

	for(int i = 1;i <= n;i++)   if(rudu[i] == 0)   q.push(i);  //将入度为 0 的点 加入队列

	while(!q.empty( ))
	{
		int front = q.front( );
		printf( "%d ",front);
		q.pop( );
		num++;

		for(int i = 0;i < vec[front].size( );i++)   //遍历 front 指向的所有点   
		{
			if(--rudu[vec[front][i]] == 0)   q.push((vec[front][i]));
		}
	}

	return 0;
}
