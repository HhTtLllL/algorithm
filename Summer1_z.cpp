#include<cstdio>
#include<iostream>
#include<math.h>

#define TEMP ((sqrt(5)+1)/2)
using namespace std;

int main()
{
	int a,b;
	int a_k;
	while(~(scanf( "%d%d",&a,&b)))
	{
		int k = abs(a-b);
		a = min(a,b);
		int ans = floor(k*TEMP);
		if(ans == a)   printf( "0\n");
		else printf( "1\n");
	}
}
