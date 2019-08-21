//威左夫   模板
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;

int main( )
{
	int n,m;
	while(scanf( "%d%d",&n,&m) != EOF)
	{
		if(n > m)  swap(n,m);
		int temp = floor((m-n)*((sqrt(5.0)+1)/2));
		if(n == temp)   printf( "0\n");
		else printf( "1\n");
	}

	return 0;
}
