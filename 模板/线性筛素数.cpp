#include <iostream>

using namespace std;

const int MAX = 1e7 + 10;

int judge[MAX];
int prime[MAX];
int result[MAX];

int main()
{
	int n,m;
	cin >> n >> m;
	int cnt = 0;
	for(int i = 2;i <= n;i++)
	{
		if(!judge[i])
		{
			prime[cnt] = i;
			cnt++;
		}

		for(int j = 0;j < cnt && i * prime[j] <= n;j++)
		{
			judge[i * prime[j]] = 1;
			if(i%prime[j] == 0) break;
		}
	}


	for(int i = 0;i <= n;i++)  result[prime[i]] = 1;
	
	for(int i = 1;i <= m;i++)
	{
		int temp;
		cin >> temp;

		if(result[temp] == 1)  cout << "Yes" << endl;
		else cout << "No" << endl;
	}
//	cout << cnt << endl;

	return 0;
}
