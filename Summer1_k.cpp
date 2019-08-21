#include<iostream>

using namespace std;

int a[10010];

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long temp = 0;
		int n;
		int flag = 0;
		cin >> n;
		int temp1;
		int judge = 0;
		for(int i = 1;i <= n;i++)
		{
			cin >> temp1;
			if(temp1 == 0)     continue;
			if(temp1 != 1)     flag = 1;
			judge++;
			temp ^= temp1;
		}
		if(flag == 0)
		{
			if(judge%2 == 1)   cout << 2 << endl;
			else cout << 1 << endl;
		}
		else
		{
			if(temp)  cout << 1 << endl;
			else cout << 2 << endl;
		}
	}
}
