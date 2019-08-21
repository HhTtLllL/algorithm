#include<cstdio>
#include<iostream>
using namespace std;
int a,n,m,x;
int num[25];
int digui(int t);
int main( )
{
	scanf("%d%d%d%d",&a,&n,&m,&x);
	num[0] = a;
	num[n-1] = m;
	digui(n);
	printf( "%d",num[x]);
}

int digui(int t)
{
	if(t == 0)   return num[0];
	else
	{
		num[t-1] = digui(t-1) + digui(t-2);
//		return (num[t-1] + num[t-2]);
	}

	return 0;
}
