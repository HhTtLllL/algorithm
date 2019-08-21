#include<stdio.h>


int main()
{
	long long n,k;
	scanf( "%lld%lld",&n,&k);

	if((n/k)%2)   printf( "YES\n");
	else printf( "NO\n");

	return 0;

}
