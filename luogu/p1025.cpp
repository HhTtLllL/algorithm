#include <cstdio>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

int sum;
void dfs(int n,int k,int flag)
{
	if(k == 0 && n == 0)	sum++;
	if((k == 0 && n != 0) || n <= 0) return ;

	for(int i = flag;i <= n;i++)
	{
		n -= i;
		dfs(n,k - 1,i);
		n += i;
	}
}


int main()
{
	int n,k;
	cin >> n >> k;
	vector<int> temp;
	for(int i = 1;i < n;i++)
	{
		n -= i;
		dfs(n,k - 1,i);
		n += i;
	}

	cout << sum << endl;

	


	return 0;
}
