#include<cstdio>
#include<iostream>

using namespace std;
int a[100];
int b[100];
char c[100];
int main( )
{
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++)   scanf( "%d",&a[i]);
	int sum = 0;
	int i = 1;
	int j = 1;
	int flag1 = 0,flag2 = 0;
	while(i < n)
	{
		int temp = min(a[i],a[n]);
		if(temp == a[i])
		{
			flag1 = i;
			i++;
		}
		else
		{
			 flag2 = n;
			 n--;
		}
		if(temp > b[j-1])
		{
			if(a[flag2] == temp)
			{
				b[j] = temp;
			//	if(temp == a[flag1])
			//	{
					c[j] = 'R';
			/*	}
				else
				{
					c[j] = 'R';
				}*/
			}
			if(a[flag1] == temp)
			{
				b[j] = temp;
			//	if(temp == a[flag2])
			//	{
					c[j] = 'L';
			/*	}
				else
				{
					c[j] = 'R';
				}*/
			}

			j++;
			sum++;
		}
	}
	if(i == n)  
	{
		c[j] = 'R';
		sum++;
	}


	for(int i = 1;i <= sum;i++)    printf( "%c",c[i]);

}
