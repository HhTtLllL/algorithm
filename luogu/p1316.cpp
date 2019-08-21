#include<iostream>
#include<algorithm>

using namespace std;

int a[100005];
int n,sum;
int judge(int interval);

int main( )
{
	cin >> n >> sum;
	
	for(int i = 1;i <= n;i++)  cin >> a[i];

	sort(a+1,a+n+1);
	int l = 0,r = a[n];

	while(l < r-1)
	{
		int mid = (r+l) >> 1;

		if(judge(mid))  l = mid;
		else r = mid;
	}

	cout << l << endl;
}

int judge(int interval)
{
	int count = 1;
	int temp = a[1];
	for(int i = 2;i <= n;i++)
	{
		if(a[i] >= temp + interval)
		{
			count++;
			temp = a[i];
		}
		if(count >= sum)  return 1;
	}

	return 0;
}
