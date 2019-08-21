#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std; 
int a[2005];
int b[2005];

int main()
{
	int n;
	cin >> n;
	
	for(int i = 1;i <= n;i++)   cin >> a[i];
	
	for(int i = 1;i <= n;i++)	cin >> b[i];
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	
	int flag;
	int temp;
	int sum1 = 0;   //记录胜场
	int sum2 = 0;    //记录平场
	int sum3 = 0;   //记录负场
	for(int i = 1;i <= n;i++)
	{
		flag = 0;
		for(int j = n;j >= 1;j--)
		{
			if(b[j] == -1)   continue;
			if(a[i] > b[j])
			{
				flag = 1;
				temp = j;
				break;
			}
		}
		if(flag == 1)
		{
			sum1++;
			b[temp] = -1;
		}
		else
		{
			for(int j = n;j >= 1;j--)
			{
				if(b[j] == -1)  continue;
				if(b[j] > a[i])
				{
					flag = -1;
					temp = j;
					break;
				}
			}
			if(flag == -1)
			{
				sum3++;
				b[temp] = -1;
			}
		}

		if(flag == 0)
		{
			for(int j = 1;j <= n;j++)
			{
				if(a[i] == b[j])
				{
					b[j] = -1;
					sum2++;
					break;
				}
			}
		}
	}
	
	cout << (sum1 - sum3)*200 <<endl;	
} 
