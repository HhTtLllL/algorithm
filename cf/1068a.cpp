#include<iostream>
#include<cstdio>

using namespace std;

long long n,m,k,l;

int judge(long long temp)
{
	int flag = 0;
	
		if(temp*m - k >= l)
		{
			flag = 1;
		}
	
	if(flag == 1) return 1;
	else return 0;	
}

int main()
{
	cin >> n >> m >> k >> l;
	
	if(n < m)
	{
		cout << -1 << endl;
		return 0;	
	}	
	
	if((n - k) < l)
	{
		cout << -1 << endl;
		return 0;
	} 
	
	int i = 1;
	int flag = 0;
	long long left = 0;
	long long right = n/m;
	
	while(left < right)
	{
		long long mid = (left + right)/2;
		int flag = judge(mid);
		if(flag == 0) left = mid + 1;
		else if (flag == 1)  right = mid;

	}
	if(judge(left) == 1)   cout << left << endl;
	else cout << -1 << endl;
	
	
	return 0;
}
