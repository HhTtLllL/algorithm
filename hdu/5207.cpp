#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int a[100005];

int cmp( int a,int b)
{
	return a > b;
}
int main( )
{
	int t;
	cin >> t;
	for(int i = 1 ;i <= t;i++)
	{
		int n ;
		cin >> n;
		for(int j = 1;j <= n;j++)   cin >> a[j];

		sort(a+1,a+n+1,cmp);
		int temp = a[1];
		int ans = 1;
		for(int j = 2;j <= n;j++)
		{
			if(temp%a[j] == 0)  
			{
				ans = a[j];
				break;
			}
		}

		cout << "Case #" << i << ": " << ans << endl;
	}
}


