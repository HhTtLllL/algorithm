#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdio>

using namespace std;
typedef pair<int,int> pi;

pi a[25005];

int main( )
{
	int n,time;
	cin >> n >> time;
	for(int i = 1;i <= n;i++)	
	{
		int left,right;
		scanf( "%d%d",&left,&right);
		a[2*i-1] = pi(left,1);
		a[2*i] = pi(right,-1);
	}

	sort(a+1,a+2*n+1);
	int num = 0,ans = 0;
	for(int i = 1;i <= 2*n;i++)
	{
		if(a[i].second == 1)
		{
			num++;
			ans = max(ans,num);
		}
		else    num--;
	}
	if(ans <= n)	cout << ans << endl;
	else cout << -1 << endl;
}

