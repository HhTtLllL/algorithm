#include <cstdio>
#include <cstring>
#include <set>

using namespace std;

#define ll long long
#define MOD 0x7FFFFFFF

const int MAX = 1e8 + 10;
const int seed = 131;
ll frontb[MAX];
char a[MAX];
int book[MAX];
int vis[500];
int num = 0;
int n,m;

int front_hash(int temp)
{
	ll sum = 0;
	int j = 0;
	for(int i = 0;i < n;i++)
	{
		sum = sum * num + vis[a[i+temp]];
	}
	//for(int i = temp;i < temp + n;i++) sum = sum*seed + vis[a[i + j++]];
	return (sum & MOD);
}
int main()
{
	while(scanf("%d%d%s",&n,&m,a) != EOF)
	{
		vis[0] = num++;
	//	set<int> s;
		ll sum = 0;
		int len = strlen(a);
		for(int i = 1;i <len;i++)
		{
			if(vis[a[i]] == 0) vis[a[i]] = num++;
		}

		for(int i = 0;i <= len - n;i++)
		{
			if(!book[front_hash(i)])
			{
				book[front_hash(i)] = 1;
				sum++;
			}
		}
		printf( "%lld\n",sum);
	}

	return 0;
}
