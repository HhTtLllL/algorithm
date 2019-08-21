#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std; 
int a[2005];
int b[2005];

int main()
{
	int n;
	int t;

	while(cin >> n && n != 0)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));

		for(int i = 1;i <= n;i++)   cin >> a[i];
		for(int i = 1;i <= n;i++)	cin >> b[i];
		sort(a+1,a+n+1);
		sort(b+1,b+n+1);
	
		int sum1 = 0;   //记录胜场
		int alow = 1,afast = n; //alow 记录 a组最慢的马,afast 记录a组最快的马
		int blow = 1,bfast = n;
		while(alow <= afast)
		{
			if(a[afast] > b[bfast])
			{
				afast--;
				bfast--;
				sum1++;
			}
			else if(a[afast] < b[bfast])
			{
				sum1--;
				alow++;
				bfast--;
	
			}
			else if(a[afast] == b[bfast])
			{
				if(a[alow] > b[blow])
				{
					alow++;
					blow++;
					sum1++;
				}
				else
				{
					if(a[alow] < b[bfast])  sum1--;
					alow++;
					bfast--;
				}
			}
		}
		
		cout << sum1*200 <<endl;	
	
	}
	return 0;
} 
