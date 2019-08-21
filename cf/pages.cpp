#include<cstdio>
#include<algorithm>

using namespace std;

int front[105];
int after[105];

int main( )
{
	int n,p,k;
	scanf( "%d%d%d",&n,&p,&k);
	int sum1 = 0;
	int sum2 = 0;
	for(int i = 1;i <= k;i++)
	{
		front[i] = p - i;
		if(front[i] >= 1)   sum1++;
	}
	for(int i = 1;i <= k;i++)
	{
		after[i] = p+i;
		if(after[i] <= n)   sum2++;
	}


	if(p - k > 1)	printf( "<< ");
	for(int i = k;i >= 1;i--)
	{
		if(front[i] < 1)  continue;
		printf( "%d ",front[i]);

	}
	printf( "(%d) ",p);
	for(int i = 1;i <= k;i++)
	{
		if(after[i] > n)   continue;
		printf( "%d ",after[i]);
	}
	if(p + k < n)	printf( ">>");
//	printf( "\n%d  ",sum2);


}
