#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int judge(int x);
int main( )
{
	int t;
	scanf( "%d",&t);
	int count = 0;
	int flag = 1;
	while(t--)
	{
		count++;
		int n,a,b;
		scanf("%d%d%d",&n,&a,&b);
		if(a == 1 || b == 1)
		{
			if(n % 2)   printf("Case #%d: Yuwgna\n",count);
			else     printf( "Case #%d: Iaka\n",count);
			continue;
		}
		if(judge(a) || judge(b))
		{
			if(n % 2)   printf("Case #%d: Yuwgna\n",count);
			else     printf( "Case #%d: Iaka\n",count);
			continue;
		}
		else
		{
			int x = n/__gcd(a,b);
	/*		printf( "  gcd =  %d    ",__gcd(a,b));
			printf( "    x  = %d    ",x);*/
			if(x % 2)    printf( "Case #%d: Yuwgna\n",count);
			else    printf( "Case #%d: Iaka\n",count);
		}

	}
}

int judge(int x)
{
	for(int i = 2; i < x;i++)
	{
		if(x % i == 0)
		{
			return 0;
		}
	}

	return 1;
}
