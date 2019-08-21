#include<stdio.h>
#include<algorithm>
using namespace std;
int a[1005];
int b[1005];
int main( )
{
	int n,w;
	int sum  = 0;
	int temp = 0;
	int as = 0;
	scanf( "%d%d",&n,&w);
	for( int i = 1;i <= n;i++)  scanf( "%d",&a[i]);
	for( int i = 1;i <= n;i++)
	{
		temp += a[i];
		b[i] = temp;
	}
	sort(b+1,b+n+1);
	for(int i = 1;i <= n;i++)
	{
		if(b[i] > w)
		{
			printf( "%d",0);
			return 0;
		}
	}
	for( int i = 1;i <= n;i++)
	{
		if( b[i] < -w)
		{
			printf( "%d",0);
			return 0;
		}
	}
	if(b[1] < 0)
	{
		if( b[n] < 0)
			printf( "%d",w+b[1] + 1);
		else
		{
			printf( "%d",w+b[1]-b[n]+1);
		}
	}
	else
	{
		printf( "%d",w-b[n] + 1);
	}
	/*
	int flag = 0;
	int sum = 0;
	int temp = 0;
	for(int i = 0;i <= w;i++)
	{
		temp = i;
		for(int j = 1;j <= n;j++)
		{
			temp = temp+a[j];
			if( temp < 0)
			{
				flag = 1;
				break;
			}
			if(temp > w)
			{
				flag = 1;
				break;
			}
		}

		if(flag == 0)
		{
			sum++;
		}
		flag = 0;
	}*/
//	printf( "%d",sum);
}
