#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

const int MAX = 10e5 + 10;
int a[MAX];
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		for(int i = 0;i < n;i++)	scanf( "%d",&a[i]);
		sort(a,a + n);
		int two = 0;
		int three = 0;
		for(int i = 0;i < n - 2;i++)
		{
			if(a[i] == a[i + 1] && a[i + 1] ==  a[i + 2])
			{
				three = 1;
				break;
			}
		}
		if(three == 1)
		{
			printf("woman\n");
			continue;
		}


		for(int i = 0;i < n - 1;i++)
		{
			if(a[i] == a[i + 1])
			{
				two++;
			}
		}

		if(two > 1)
		{
			printf("woman\n");
			continue;
		}
		long long sum = 0;
                long long sum2 = 0;
                for(int i = 0;i < n;i++)        sum += a[i];
                for(int i = 0;i < n;i++)        sum2 += i;
          
		sum = sum - sum2;
                if(sum%2 == 0) printf("woman\n");
                else printf("man\n");
	}

	return 0;
}
