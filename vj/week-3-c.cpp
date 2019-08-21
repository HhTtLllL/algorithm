//欧拉路 无向连通图 中 只有一条路径
//


//判断是否为  无向 欧拉回路   
//
//所有 结点 的度数 都为 偶数
//而且 他们公用一个根
//
//
//有向欧拉路存在 的充要条件  
//
//所有顶点 的 入度 等于出度 且改 图 是连通图 
//
#include<cstdio>
#include<cstring>

using namespace std;

int pre[1005];
int count[1005];    //累计每一个结点的 度
int find(int x);
int main( )
{
	int n,m;
	while((scanf( "%d",&n)) && n != 0)
	{

		memset(pre,0,sizeof(pre));
		memset(count,0,sizeof(count));

		for(int i = 1;i <= n;i++)    pre[i] = i;
		
		scanf( "%d",&m);
	
		while(m--)
		{
			int x,y;
			scanf( "%d%d",&x,&y);
			count[x]++;  // 
			count[y]++;

			int tx = find(x);
			int ty = find(y);

			if(tx != ty)	pre[tx] = ty;

		}

		int root = 0;
		int du = 0;
		
		for(int i = 1;i <= n;i++)
		{
			//若 每一个结点的 度 都为 偶数
			if(count[i] % 2 == 0)   du++;
			if(i == pre[i])    root++;
		}
		     //若 n 个结点的 度都为偶数
		if(du == n && root == 1)   printf( "1\n");
		else   printf( "0\n");
	}



	return 0;
}


int find(int x)
{
	int temp = x;
	while(temp != pre[temp])   //如果 temp  不是根的话 ,就继续往上 找
	{
		temp = pre[temp];
	}

	return  temp;
}
