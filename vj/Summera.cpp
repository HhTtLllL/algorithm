#include<iostream>
#include<cstdio>

using namespace std;

long long x,y,p,q;
int main( )
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> x >> y >> p >> q;
		if(q == p)
		{
			if(x != y)   printf( "-1\n");
			else printf( "0\n");
			continue;
		}
		else
		{
			if(p >= 1)
			{
				int temp = max((x + p - 1)/p,(y-x+q-1-p)/(q-p));
				printf( "%lld\n",temp*q - y);
			}
			else 
			{
				if(x != 0)	printf( "-1\n");
				else     printf( "0\n");
				
			}
		}
	}
	
	return 0;
}
