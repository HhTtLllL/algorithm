#include<iostream>
#include<cstdio>

using namespace std;


int main()
{
	int n;
	while(cin >> n && n)
	{
		int temp;
		int result = 0;  // 0 ^ n= n
		for(int i = 1;i <= n;i++)
		{
			cin >> temp;
			result ^= temp;
		}
		cout << result << endl;
	}

	return 0;
}
