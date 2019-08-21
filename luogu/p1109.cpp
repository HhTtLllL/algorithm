#include<iostream>

using namespace std;

int a[55];

int main( )
{
	int n;
	cin >> n;
	int sum = 0;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
		sum += a[i];
	}

	int r,l;
	cin >> l >> r;
	if(sum < l*n || sum > r*n)
	{
		cout << -1 << endl;
		return 0;
	}


	int suml = 0,sumr = 0;
	for(int i = 1;i <= n;i++)
	{
		if(a[i] < l) suml +=(l-a[i]);
		else if(a[i] > r) sumr +=(a[i] - r);
	}

	cout << max(suml,sumr) << endl;
	
	

}
