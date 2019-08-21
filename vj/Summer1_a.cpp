#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 1;i <= t;i++)
	{
		long long n,k;
		cin >> n >>k;
		if(k > 1)
		{
			if(k >= n)    printf( "Case %d: first\n",i); 
			else	printf("Case %d: second\n",i);
		}
		else
		{
			if(n%2 == 1)   printf( "Case %d: first\n",i);
			else printf("Case %d: second\n",i);
		}

	}
}

