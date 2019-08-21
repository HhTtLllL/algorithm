#include<iostream>
#include<algorithm>

using namespace std;

int a[100010];
int main()
{
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++)  cin >> a[i];

	sort(a+1,a+n+1);
	
	for(int i = 2;i <= n-1;i++)
	{
		if((a[i] + a[i-1]) > a[i+1])
		{
			printf( "YES\n");
			return 0;
		}
	}

	printf( "NO\n");

	return 0;
}
