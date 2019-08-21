#include<cstdio>

using namespace std;
int a[2000];
int main( )
{
	int n;
	scanf( "%d",&n);
	int sum = 0;
	for(int i = 1;i <= n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i] == 1) sum++;
	}
	printf( "%d\n",sum);
	for(int i = 1;i <= n;i++)
	{
		if(a[i+1] == 1)   printf( "%d ",a[i]);
	}

	printf( "%d",a[n]);


}
