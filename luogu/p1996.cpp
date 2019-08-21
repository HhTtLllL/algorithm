#include<iostream>

using namespace std;

int a[105];
int main( )
{
	int n,m;
	int temp = 1;
	int sum1 = 0;

	cin >> n;cin >> m;
	for(int i = 1;i <= n;i++)   a[i] = i;
	a[0] = -1;
	int i = 1;
	while( sum1 < n)
	{
		if( temp - m == 0)
		{
			cout << a[i] << " ";
			a[i] = 0;
			sum1++;
//			temp = 1;
			temp = 0;
		}

		i++;
		if( i > n)      i = i%n;
	//	i = i%n;
	/*	if( a[i] == -1)
		{
			i++;
			continue;
		}*/
		if(a[i] != 0)
		{
			temp++;
		}
//		i = ++i%n;

//		if(i % n == 0)    i++;

	}
}
