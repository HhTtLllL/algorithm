#include<stdio.h>

int main( )
{
	long long a,b,k,t;
	scanf( "%lld",&t);
	while(t--)
	{
		scanf( "%lld%lld%lld",&a,&b,&k);
		if(k % 2 == 0)	printf( "%lld\n",( (k/2)*a) - ( (k/2)*b));
		else printf( "%lld\n",((k-(k/2))*a) - ((k/2)*b));
	}
}
