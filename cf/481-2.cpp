#include<cstdio>
char  a[105];

int main( )
{
	int n;
	scanf( "%d",&n);
	getchar( );
	for( int i = 1;i <= n;i++)
	{
		scanf( "%c",&a[i]);

	}
	int temp = 1;
	int sum = 0;
	for(int i = 1;i < n;i++)
	{
		while(a[i] == 'x' && a[i+1] == 'x' )
		{
			temp++;
			i++;
		}
		if(temp >= 3)
		{
			sum +=(temp-2);
		}

		temp = 1;
	}

	printf( "%d",sum);
}
