//因为  数据为  2^31  次方 ,所以 fib 到 50 就ok 

#include<cstdio>

using namespace std;

long long f[55];
int main( )
{
	long long n;
	while(scanf( "%lld",&n) && n)
	{
		int flag = 0;
		f[0] = 2;
		f[1] = 3;
		if(n == f[0] || n == f[1])   flag = 1;
		for(int i = 2;i <= 50;i++)
		{
			f[i] = f[i-1] + f[i-2];
			if(f[i] == n)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1)   printf( "Second win\n");
		else    printf( "First win\n");
	}
}
