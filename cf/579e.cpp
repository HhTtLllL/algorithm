#include<iostream>
#include<algorithm>

using namespace std;

int a[150010];
int main()
{
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		int temp;
		scanf( "%d",&temp);
		a[temp]++;
	}

	int sum = 0;
	for(int i = 1;i <= 150005;i++)
	{
		int flag = 0;
		if(a[i] == 0)
		{
			if(i != 1)
			{
				if(a[i-1] > 1)
				{
					a[i - 1]--;
					sum++;
					flag = 1;
				}
			}
		}
		if(flag == 0)
		{
			if(a[i] == 0)
			{
				if(a[i+1] > 1)
				{
					a[i+1]--;
					sum++;
				
				}
			}
		}
		if(a[i] != 0)	sum++;
	}

	printf( "%d\n",sum);
}
