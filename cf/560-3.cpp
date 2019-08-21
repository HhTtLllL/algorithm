#include<cstdio>

using namespace std;
int sum1;
char a[200005];
int main( )
{
	int n;
	int j = 1;
	int i = 0;
	scanf( "%d",&n);
	getchar( );
	scanf( "%s",a);
	
	if(n == 0)
	{
		printf( "good\n");
		return 0;
	}
	if(n % 2 == 0)
	{
		while(i < n - 1)
		{
			if(a[i] == a[i+j])
			{
				a[i+j] = '0';
				sum1++;
				j++;
			}
			else 
			{
				i = j;
				j = 1;
			}
		}

	}
	if((n -sum1) %2 == 1)
	{
		a[n-sum1 - 1] = '0';
		sum1++;
	}


	if(n % 2 == 1)
	{

		while(i < n-1)
		{
			if(a[i] == a[i+j])
			{
				a[i+j] = '0';
				sum1++;
				j++;
			}
			else 
			{
				i = j;
				j = 1;
			}

		}

		if((n -sum1) %2 == 1)
		{
			a[n-sum1 - 1] = '0';
			sum1++;
		}
	}
	
	printf( "%d\n",sum1);
	for(i = 0;i < n;i++)
	{
		if(a[i] != '0') printf( "%c",a[i]);
	}
}
