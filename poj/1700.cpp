#include<iostream>
#include<algorithm>

using namespace std;
int a[1005];
int main( )
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		for(int i =1;i <= n;i++)  cin >> a[i];

		sort(a+1,a+n+1);

		int sum = 0;
		for(int i = 2;i <= n;i++)   sum += a[i];
		cout << sum << endl;
	}
}
