#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int main( )
{
	int n;
	cin >> n;
	if(n == 0)
	{
		cout << 10;
	}
	else if( n >= 1 && n <= 9)
	{
		cout << 9;
	}
	else
	{
		int sum  = 1;
		while(n != 1)
		{
			n += 1;
			while(n % 10 == 0)
			{
				n = n/10;
			}
			sum++;
			if(n >= 1 && n <= 9)
			{
				sum += 8;
				break;
			}
		}
		cout << sum;
	}



}
