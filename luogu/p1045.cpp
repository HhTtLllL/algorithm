#include<cstdio>
int a[1000001];

int mul(int *a);
int main( )
{
	a[1000000] = 1;
	int n;
	scanf( "%d",&n);

	for(int i = 1;i <= n;i++)
	{
		mul(a);
	}

	int i = 1000000;
	int t = 500;
	while(t >= 0)
	{
		printf( "%d",a[i - t]);
		t--;
	}


}


int mul(int *a)
{
	int i = 1000000;
	int temp2 = i;
	int temp;
	int t = 0;
	while(a[i] != 0) 
	{
		t++;
		i--;
	}
	i = temp2;
	while(t > 0)
	{
		temp = a[i] * 2;
		if(temp >= 10)
		{
			a[i] = temp%10;
			a[i-1] += (temp/10);
		}
		else
		{
			a[i] = temp;
		}
		t--;
		i--;

	}

	return 0;
}
