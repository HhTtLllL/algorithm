#include<iostream>

using namespace std;
int a[100005];

int judge(int x);
int main( )
{
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++) cin >> a[i];
	int sum = 0;
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			if(judge(a[i]) >= judge(a[j]))
			{
				int flag = judge(a[i]);
				int tempa = a[i];
				int tempb = a[j];
				long long num = 1;
				while(flag--)
				{
					sum = (sum + (tempb%10)*num)%998244353;
					tempb /= 10;
					num *= 10;
					sum = sum +(tempa%10)*num%998244353;
					tempa /= 10;
					num *= 10;
				}
			}
		}
	}

	cout << sum << endl;


}

int judge(int x)
{
	int cnt = 0;
	while(x)
	{
		x /= 10;
		cnt++;
	}
	return cnt;
}
