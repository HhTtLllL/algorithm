#include <iostream>
#include <algorithm>

using namespace std;

class Trie
{
	public:
	int tree[50010][26];
	int sum[50010];
	int val[50010];
	int tot;
	string word;
	Trie()
	{
		tot = 1;
	}
	void insert(string word)
	{
		int len = word.size();
		int u = 0;
		for(int i = 0;i < len;i++)
		{
			int c = word[i] - 'a';
			if(!tree[u][c])
			{
				tree[u][c] = tot++;
			}
			sum[tree[u][c]]++;
			u = tree[u][c];
		}
		val[u]++;
	}

	bool search(string word)
	{
		int len = word.size();
		int u = 0;
		for(int i = 0;i < len;i++)
		{
			int c = word[i] - 'a';
			if(!tree[u][c])  return false;
			u = tree[u][c];
		}
		if(val[u]) return true;
		else return false;
	}

	bool startsWith(string word)
	{
		int len = word.size();
		int u = 0;
		for(int i = 0;i < len;i++)
		{
			int c = word[i] - 'a';
			if(!tree[u][c]) return false;
			u = tree[u][c];
		}
		if(sum[u]) return true;
		else return false;
	}
};


int main()
{
	Trie t;
//	t.word = "apple";
//
	t.insert("apple");

	if(t.search("apple"))  printf("apple 在\n");
	if(t.search("app"))  printf("完全 app 在");
	if(t.startsWith( "app")) printf("前缀 app 在\n");
	


	return 0;
}
