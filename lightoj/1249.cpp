#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

char name[105][105];
int a[105];

int main()
{
	int t;
	cin >> t;
	int j = 1;
	while(t--)
	{
		memset(name,0,sizeof(name));
		memset(a,0,sizeof(a));
		
		int n;
		cin >> n;
		for(int i = 1;i <= n;i++)
		{
			scanf("%s",name[i]);
			int temp1,temp2,temp3;
			cin >> temp1 >> temp2 >> temp3;
			a[i] = temp1 * temp2 * temp3;
		}
		
		int max1 = a[1];
		int temp = 1;
		int flag = 0;
		for(int i = 2;i <= n;i++)
		{
			if(max1 < a[i])
			{
				temp = i;
				max1 = a[i];
			}
		}
		int min1 = a[1];
		int temp2 = 1;
		for(int i = 2;i <= n;i++)
		{
			if(min1 > a[i])
			{
				temp2 = i;
				min1 = a[i];
			}
		}
		
		
		if(temp == 1)
		{
			if(max1 == a[2])
			{
				printf("Case %d: no thief\n",j);
			}
			else
			{
				printf("Case %d: %s took chocolate from %s\n",j,name[temp],name[temp2]);
			}
		}
		else
		{
				printf("Case %d: %s took chocolate from %s\n",j,name[temp],name[temp2]);
		}
		
		
		j++;
	}
	
}
