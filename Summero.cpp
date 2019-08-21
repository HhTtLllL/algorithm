#include<iostream>

using namespace std;

int main()
{
	int k,a,b;
	cin >> k >> a >> b;

	if((a < k && b < k) || (a%k && b/k == 0) || (b%k && a/k == 0))
	{
		cout << -1 << endl;
		return 0;
	}

	int sum = a/k + b/k;

	cout << sum << endl;
}
