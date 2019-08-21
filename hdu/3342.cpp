#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<cstring>

using namespace std;

vector<int> v[105];
queue<int> q;
int indeg[105];
int n,m;
int cnt;

int toposort()
{
	while(!q.empty())  q.pop();
	for(int i = 0;i < n;i++)   if(!indeg[i]) q.push(i);

	while(!q.empty())
	{
		int temp = q.front();
		cnt++;
		q.pop();
		
		for(int i = 0;i < v[temp].size();i++)
		{
			int x = v[temp][i];
			indeg[x]--;
			if(!indeg[x]) q.push(x);
		}
	}

	if(cnt == n)   return 1;
	else return 0;

}
int main( )
{
	while(cin >> n >> m && n)
	{
		cnt = 0;
		memset(indeg,0,sizeof(indeg));
		for(int i = 0;i < n;i++)  v[i].clear();

		int a,b;
		for(int i = 0;i < m;i++)
		{
			cin >> a >> b;
			v[a].push_back(b);
			indeg[b]++;
		}

		if(toposort())  cout << "YES" << endl;
		else cout << "NO" << endl;
	}

}
