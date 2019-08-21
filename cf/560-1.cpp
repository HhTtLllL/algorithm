#include<cstdio>
#include<cmath>
using namespace std;
char a[200005];
long long num;
int sum1;
int main( )
{

	int n,x,y;
	scanf( "%d%d%d",&n,&x,&y);
	getchar( );
	for(int i = n-1;i >= 0;i--)
	{
		scanf( "%c",&a[i]);
	}
	if(x == y)
	{
		for(int i = 0;i <= x-1;i++)
		{
			if(a[i] == '1')
			{
				sum1++;
			}
		}

		if(a[x] == '0') sum1++;

		printf( "%d\n",sum1);
		return 0;
	}
	else
	{
		for(int i = 0;i < y;i++)
		{
			if(a[i] == '1' )  sum1++;
		}
		if(a[y] == '0')  sum1++;
		for(int i = y+1;i <= x;i++)
		{
			if(a[i] == '1')   sum1++;
		}
	}

	printf( "%d\n",sum1-1);
	




}
