#include<cstdio>

int main( )
{
	int n,k;
	scanf( "%d%d",&n,&k);
	for(int i = 1;i <= k;i++)
	{
		if(n%10)   n -= 1;
		else   n /= 10;
	}

	printf( "%d\n",n);


}
