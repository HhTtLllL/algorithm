#include<iostream>

using namespace std;

int main( )
{
	int n,k;
	cin >> n >> k;
	int sum = 0;
	for(int i = 1;i <= n;i++) sum += i;
	int cnt = 0;
	int i = n+1;
	while(sum != k)
	{
		sum  = sum - i;
		i--;
		cnt++;
	}

	cout << cnt << endl;
}
