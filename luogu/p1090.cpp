#include<iostream>
#include<cstdio>

using namespace std;
int a[10005];
int b[10005];
int main()
{
	int n;
	cin >> n;
	int sum1 = 0;
	for( int i = 1;i <= n;i++)   scanf( "%d",&a[i]);
	int min1,min2,flag1,flag2,flag3,flag4;
	if( n == 1)
	{
		printf( "%d",a[1]);
		return 0;
	}
	for( int i = 1;i < n;i++)
	{
		//先设 两个最小值
		for(int i = 1;i <= n;i++)
		{
			if(b[i] != 1)
			{
				b[i] = 1;
				min1 = a[i];
				flag1 = i;
				break;
			}
		}
		for(int i = 1;i <= n;i++)
		{
			if(b[i] != 1)
			{
				b[i] = 1;
				min2 = a[i];
				flag2 = i;
				break;
			}
		}


		//找到两个最小值
		for( int i = 1;i <= n;i++)
		{
			if(b[i] != 1)
			{
				if(a[i] < min1)
				{
					min1 = a[i];
					b[i] = 1;
					b[flag1] = 0;
					flag1 = i;
				}
			}
		}
		for( int i = 1;i <= n;i++)
		{
			if(b[i] != 1)
			{
				if(a[i] < min2)
				{
					min2 = a[i];
					b[i] = 1;
					b[flag2] = 0;
					flag2 = i;
				}
			}
		}

		a[flag1] = min1 + min2;
		b[flag1] = 0;
		sum1 = sum1 + a[flag1];
	}
	cout << sum1 << endl;
}


