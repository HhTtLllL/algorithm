#include<stdio.h>
#include<algorithm>

using namespace std;
long long  d[200005];
long long  a[200005];
long long  b[200005];
long long  c[200005];
int main( )
{
	long long n;
	long long sum1;
	scanf( "%lld",&n);
	long long  sum = 0;
	for(int i = 1;i <= n;i++)
	{
		scanf( "%lld",&a[i]);
		d[i] = a[i];
	}
	sort(a+1,a+n+1);
	for(int i = 1;i <= n;i++)	b[i] += a[i] + b[i-1];
	for(int i = n;i >= 1;i--)
	{
		if(i == n)
		{
			if(a[n-1] == b[n-2])
			{
				sum++;
				c[sum] = a[i];
			}
		}
		else
		{
			if(a[n] == (b[n-1] - a[i]))
			{
				sum++;
				c[sum] = a[i];
			}
		}
	}

	printf( "%lld\n",sum);
/*	for(int i = 1;i <= sum;i++)
		printf( "%lld  ",c[i]);*/
	for(int i = 1;i <= sum;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			if(c[i] == d[j])
			{
				printf("%d ",j);
				d[j] = 0;
				break;
			}
		}
	}


}
