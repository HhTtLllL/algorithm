
//    方法 1 :  递推  第 i 项 等于前一项  + 第 i/2 项
//
#include<cstdio>
#include<algorithm>

using namespace std;
long long a[1000005];


int main( )
{

	long long n;
	while((scanf( "%lld",&n)) != EOF)
	{
		a[0] = a[1] = 1;
		a[2] = a[3] = 2;
		a[4] = a[5] = 4;
		for(long long i = 6;i <= n;i++)
		{           
			if(i%2 == 0)  a[i] = (a[i-1] + a[i/2])%1000000000;
			else a[i] = a[i-1];
		}
		printf( "%lld\n",a[n]);
	}
}

//方法 2 : dp   
//
//         当 i 为 奇数时  : dp[i] = dp[i-1];
//         当 i 为偶数时   : dp[i] = dp[i-1] + dp[i/2]
