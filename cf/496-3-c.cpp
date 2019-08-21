#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int a[120009];
int b[120009];
int judge(int t);
int main( )
{
	int n;
	int flag = 0;
	int sum1 = 0;
	int temp2 = 0;
	scanf( "%d",&n);
	for(int i = 1;i <= n;i++)
	{
		scanf( "%d",&a[i]);
		b[i] = a[i];
	}

	for(int i = 1;i <= n;i++)
	{
		if(a[i] == 0)   continue;
		temp2 = 0;
		flag = 0;
		for(int j = 1;j <= n;j++)
		{
			temp2 = 0;
			if(i == j)	continue;
			temp2 = max(temp2,judge(a[i]+b[j]));
			
			if(temp2 == 1)
			{
				a[j] = 0;
				flag = 1;
			}
		}

		if(flag == 0)	sum1++;
	}

	printf( "%d",sum1);
}

int judge(int t)
{
	while(t)
	{
		if(t % 2 == 1)
		{
			return 0;
		}
		else
		{
			if(t == 2) break;
			t = t/2;
		}
	}

	return 1;
}

