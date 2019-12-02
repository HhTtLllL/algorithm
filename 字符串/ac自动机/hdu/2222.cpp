#include <cstdio>
#include <cstring>
#include <queue>
#include <iostream>

using namespace std;
struct Trie
{
	int next[500010][26],fail[500010],end[500010]; // end 某一个结点 是几个模板串的未结点
	int root,L; //L 用来记录 trie树 结点的个数和 加入结点的 顺序

	int newnode()
	{
		for(int i = 0;i < 26;i++) 	next[L][i] = -1;
		
		end[L++] = 0;
		return L-1;
	}
	void init()
	{
		L = 0;
		root = newnode(); // 根节点 也可能会有 26 个结点
	}

	void insert(char buf[])    //建立字典树
	{
		int len = strlen(buf);
		int now = root;
		for(int i = 0;i < len;i++)
		{
			int c = buf[i] - 'a';
			if(next[now][c] == -1)  //如果结点不存在则新建结点
			{
				next[now][c] = newnode();
			}
			now = next[now][c];
		}
		end[now]++;

	}

	void build()
	{
		queue<int> Q;
		fail[root] = root;
		// 先找根结点下 有几个子结点
		for(int i = 0;i < 26;i++)
		{
			if(next[root][i] == -1)
			{
				next[root][i] = root;
			}
			else
			{
				fail[next[root][i]] = root;   //建立第一层的失配指针
				Q.push(next[root][i]);
			}
		}


		while(!Q.empty())  //在已经找的结点上，继续往下找
		{
			int now = Q.front();
			Q.pop();
			for(int i = 0;i < 26;i++)
			{
				if(next[now][i] == -1)  //遍历这一层 的所有节点，如果每结点了，则走失配指针
				{
					next[now][i] = next[fail[now]][i];
				}
				else     // 如果下一个结点有节点出现的话，更新失配指针
				{        
					//next[now][i]    这个结点的
					fail[next[now][i]] = next[fail[now]][i];
					Q.push(next[now][i]);
				}
			}
		}
	}

	int query(char buf[])
	{
		int len = strlen(buf);
		int now = root;
		int res = 0;   //判断模板串 一共出现了几次
		for(int i = 0;i < len;i++)
		{
			int c = buf[i] - 'a';
			now = next[now][c];   //向下走一步

			int temp = now;
			while(temp != root)
			{
				res += end[temp];
				end[temp] = 0;    //加过之后清零,避免重复添加
				temp = fail[temp]; //这个结点结束后,走他的失配指针,看是否还有其他子串
			}
		}
		return res;
	}
};

char buf[1000010];
Trie ac;
int main()
{
	int T;
	int n;
	scanf("%d",&T);
	while(T--)
	{	
		scanf("%d",&n);
		ac.init();
		for(int i = 0;i < n;i++)
		{
			scanf("%s",buf);
			ac.insert(buf);
		}
		ac.build();

		scanf("%s",buf);
		printf("%d\n",ac.query(buf));
	}


	return 0;
}
