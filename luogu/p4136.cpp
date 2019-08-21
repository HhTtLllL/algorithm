#include<cstdio>
#include<algorithm>

using namespace std;

int main( )
{
	int n;
	while(scanf( "%d",&n) && n)
	{
		if(n*n%2)   printf( "Bob\n");
		else printf( "Alice\n");
	}

	return 0;
}
