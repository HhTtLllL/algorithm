#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#include<cstring>

using namespace std;

const int mod = 142857;

int virus[100005];
int indeg[100005];
vector<int> v[500005];
int n,m,num;
queue<int> q;
void toposort()
{
	for(int i = 1;i <= n;i++)  if(!indeg[i])  q.push(i);

	while(!q.empty())
	{
		int temp = q.front();
		q.pop();
		
		for(int i = 0;i < v[temp].size();i++)
		{
			int x = v[temp][i];
			indeg[x]--;
			if(!indeg[x]) q.push(x);

			virus[x] = (virus[x] + virus[temp])%mod;
		}

	}
}
int main( )
{
	cin >> n >> m >> num;

	for(int i = 0;i < num;i++)
	{
		int temp;
		cin >> temp;
		virus[temp]++;
	}

	for(int i = 0;i < m;i++)
	{
		int a,b;
		cin >> a >> b;
		v[a].push_back(b);
		indeg[b]++;
	}
	toposort();
	int sum = 0;
	for(int i = 1;i <= n;i++)
	{
		sum += virus[i];
		sum = sum%mod;
	}

	cout << sum << endl;
}
