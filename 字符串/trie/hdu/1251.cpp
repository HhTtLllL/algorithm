#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

const int MAX = 1e6 + 10;
const int sigma_size = 26;
int tree[1000010][26];
int sum[1000010];
int val[1000010];
int tot;

void trie_insert(char * s)
{
	int len = strlen(s);

	int u = 0;
	for(int i = 0;i < len;i++)
	{
		int c = s[i] - 'a';
		if(!tree[u][c])  //结点不存在
		{
	//		tot++;
			tree[u][c] = tot++;   //记录第几个 字符串
		}
		sum[tree[u][c]]++;  //记录结点访问次数
		u = tree[u][c];
	}
	val[u]++;
}

int trie_find(char *s)
{
	int len = strlen(s);
	int u = 0;
	for(int i = 0;i < len;i++)
	{
		int c = s[i] - 'a';
		if(!tree[u][c])  return 0; //没找到
		u = tree[u][c];
	}

//	return sum[u];  //返回当前结点访问次数
	return val[u];
}


int main()
{

	char ss[11];
	tot = 1;
/*	while(gets(ss))
	{
		if(ss[0] == '\0')  break;
		trie_insert(ss);
	//	memset(ss,0,sizeof(ss));
	}

	while(scanf("%s",ss) != EOF)
	{
		printf("%d\n",trie_find(ss));
//		memset(ss,0,sizeof(ss));
	//	cout << trie_find(ss) << endl;
	}*/
	char s[] = "apple";
	trie_insert(s);
	char s2[] = "app";
	cout << trie_find(s2) << endl;

	return 0;
}

