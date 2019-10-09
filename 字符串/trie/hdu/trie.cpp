#include <iostream>
#include <string.h>
#include <string>

using namespace std;

const int sigma_size = 26;
const int maxnode = 1000000 + 10;

class Trie
{
	public:
	int ch[maxnode][sigma_size];
	int val[maxnode];   //保存备用信息
	int sz;  //结点总数
	Trie()
	{
		sz = 1;
		memset(ch[0],0,sizeof(ch[0]));  //初始时只有一个根结点
	}
	int idx(char c)   //字符 c 的编号
	{
		return c - 'a';
	}
	//插入字符串 s,附加信息为 v,注意 v 必须非 0,因为 0 代表"本节点不是单词结点"
	void insert(string s)
	{
		int u = 0,n = s.size();
		for(int i = 0;i < n;i++)
		{
			int c = idx(s[i]);
			if(!ch[u][c])   //结点不存在
			{
	//			memset(ch[sz],0,sizeof(ch[sz]));
	//			val[sz] = 0; //中间结点的附加信息为 0
				ch[u][c] = sz++;
			}
			val[ch[u][c]]++;
			u = ch[u][c];  //往下走
		}
//		val[u] = v;  //字符串的最后一个字符的附加信息为 v 
	}

	int search(string s)
	{
		int u = 0,n = s.size();
		for(int i = 0;i < n;i++)
		{
			int c = idx(s[i]);
			if(!ch[u][c]) return 0; //结点不存在
			u = ch[u][c];  //往下走
		}
		return val[u];
	}
};


int main()
{

	Trie t;
	
	string s;
	while(getline(cin,s))
	{
		if(s.size() == 0) break;
		t.insert(s);
	}
	


	while(cin >> s)
	{
		cout << t.search(s) << endl;
	}





	return 0;
}
