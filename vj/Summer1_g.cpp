#include<iostream>
#include<algorithm>

using namespace std;

int a[1010];

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		int ans = 0;
		cin >> n;
		a[0] = 0;

		for(int i = 1;i <= n;i++)	cin >> a[i];
		sort(a,a+n+1);
		if(n%2 == 1)
		{
			for(int i = 0;i <= n-1;i +=2)
			{
				ans ^=(a[i+1] - a[i] - 1);
			}
		}
		else
		{
			for(int i = 1;i <= n-1;i += 2)
			{
				ans ^= (a[i+1] - a[i] - 1);
			}
		}
		if(ans == 0)   cout << "Bob will win" << endl;
		else cout << "Georgia will win" << endl;
	}
}
