#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<cstring>

using namespace std;

int n,m;
vector<int> v[500005];
int indeg[100005];

queue<int> q;

int toposort()
{
	while(!q.empty())  q.pop();
	int cnt = 0;
	for(int i = 1;i <= n;i++)   if(indeg[i] == 0) q.push(i);
	while(!q.empty())
	{
		int temp = q.front();
		cnt++;
		q.pop();

		for(int i = 0;i < v[temp].size( );i++)
		{
			int x = v[temp][i];
			indeg[x]--;
			if(indeg[x] == 0) q.push(x);
		}
	}

	if(cnt == n)   return 1;
	else return 0;

}
int main( )
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		memset(indeg,0,sizeof(indeg));
		for(int i = 0;i < n;i++)  v[i].clear();

		for(int i = 0;i < m;i++)
		{
			int a,b;
			cin >> a >>b;
			v[a].push_back(b);
			indeg[b]++;
		}

			
		if(toposort())   cout << "Correct" << endl;
		else cout << "Wrong" << endl;

		

	}
}
