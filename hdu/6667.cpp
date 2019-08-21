#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

typedef struct 
{
	long long num;
	int class1;

}node;

node a[1000005];

int main()
{
	
	int t;
	scanf( "%d",&t);
	while(t--)
	{
		long long sum = 0;
		int n;
		scanf( "%d",&n);
		for(int i = 1;i <= n;i++)
		{
			scanf("%lld%d",&a[i].num,&a[i].class1);
			sum += a[i].class1;
		}
		long long  sum2 = 0;
		for(int i = 1;i <= n;i++)
		{
			sum2 += min(a[i].num,sum - a[i].class1);
		}
		sum2 = min(sum,sum2);   //必要
		printf( "%lld\n",sum2);

	}


	return 0;
}
