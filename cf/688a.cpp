#include<iostream>
#include<algorithm>

using namespace std;
char num[105];
char day[105][105];
int main( )
{
	int n,d;
	cin >> n >> d;
	int max1 = 0;
	int ans = 0;
	for(int i = 1;i <= d;i++)
	{
		cin >> day[i];
	}
	int flag = 0;
	for(int i = 1;i <= d;i++)
	{
		flag = 0;
		for(int j = 0;j < n;j++)
		{
			if(day[i][j] == '0')
			{
				flag = 1;
				break;
			}
		}

		if(flag == 1)
		{
			ans++;
			max1 = max(max1,ans);
		}
		else
		{
			ans = 0;
		}
	}

	cout << max1 << endl;

}
