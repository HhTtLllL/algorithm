#include<stdio.h>
int a[105];
int n;
int judge();
int main( )
{
	scanf( "%d",&n);
	for(int i = 0;i < n;i++)   scanf( "%d",&a[i]);
	int sum2 = 0;
	for(int i = 0;i < n;i++)
	{
		int temp1 = 0;
		int temp2 = 0;
		if(a[i] == 0)
		{
			if(a[i-1] == 1 && a[i+1] == 1)
			{
				a[i-1] = 0;
				temp1 = judge();
				a[i-1] = 1;

				a[i+1] = 0;
				temp2 = judge();
				a[i+1] = 1;
				if(temp1 > temp2)   a[i+1] = 0;
				else a[i-1] = 0;   
				sum2++;
			}
		}
	}

	printf( "%d\n",sum2);
}

int judge()
{
	int sum = 0;
	for(int i = 0;i < n;i++)
	{
		if(a[i] == 0)	if(a[i-1] == 1 && a[i+1] == 1)   sum++;
	}
	return sum;
}
