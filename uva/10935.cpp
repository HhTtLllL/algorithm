#include<iostream>
#include<cstdio>
#include<queue>

using namespace std;

queue<int> q;
int main()
{
	int n;
	while(cin >> n && n)
	{
		while(!q.empty())  q.pop();
		for(int i = 1;i <= n;i++)  q.push(i);
		while(q.size() != 1)
		{
			cout << q.front() << " ";
			q.pop();
			int temp = q.front();
			q.pop();
			q.push(temp);
		}

		cout << endl << q.front() << endl;
	}
}
