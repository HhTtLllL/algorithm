#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;
int a[210];
int main( )
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int sum = 1;
		for(int i = 1;i <= n;i++)   cin >> a[i];
		int flag = 0;
		if(n <= 2)
		{
			printf( "YES\n");
			continue;
		}
		for(int i = 1;i <= n-1;i++)
		{
			if((abs(a[i] - a[i+1])) == 1)
			{
				sum++;
			}
			else break;
		}
		if(sum < n)
		{
			if((abs(a[1] - a[n])) == 1) sum++;
			if(sum < n)
			{
				for(int i = n;i >=2;i--)
				{
					if((abs(a[i] - a[i-1])) == 1) sum++;
					else break;
				}

			}

		}
		if(sum == n)   printf( "YES\n");
		else printf( "NO\n");
	}

	return 0;
}
