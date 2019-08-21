#include<iostream>
#include<algorithm>
int a[55];
int temp[55];
int main( )
{
	int n;
	scanf( "%d",&n);
	int sum = 0;
	for(int i = 1;i <= n;i++)
	{
		scanf( "%d",&a[i]);
	}
	
	for( int i = 1;i <= n;i++)
	{
		for(int j = n;j >= 1;j--)
		{
			if(a[i] == a[j])
			{
				if( temp[j] == 0)
				{
					sum++;
				}
				temp[j]++;
				break;
			}
		}
	}

	printf( "%d\n",sum);
	for( int i = 1;i <= n;i++ )
	{
		if( temp[i] != 0)
		{
			printf( "%d ",a[i]);
		}
	}


}
