#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;
long long n,sum;


int main()
{
	long long b;
	cin >> b;
	long long i;
	for( i = 1;i*i <= b;i++)
	{
		
		if((b%i) == 0)
		{
			 sum += 2;
		}
	
	}
	i--;
	
	if(i*i == b) sum--;
	

	cout << sum <<	endl;
		
	return 0;
}
