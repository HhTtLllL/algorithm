//    因为题意说是最多,而不是最后

#include<iostream>
#include<algorithm>

using namespace std;

int a[105];
int main( )
{
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++)     cin >> a[i];

	sort(a+1,a+n+1);

	int sum = 0;
	for(int i = 1;i <= m;i++)
	{
		if(a[i] < 0)	sum -= a[i];
	}

	cout << sum << endl;
}
