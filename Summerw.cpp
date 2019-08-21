#include<iostream>
#include<cstdio>

using namespace std;

int n;
int judge(int temp);
int judge1(int temp);
int main( )
{
	int t;
	cin >> t;
	for(int i = 1;i <= t;i++)
	{
		cin >> n;
		long long l = 2,r = 10e8;
		while(l < r)
		{
			int mid = (l+r) >> 1;
			if(judge(mid))	r = mid ;
			else l = mid+1;
		}
		if(judge1(l))    printf( "Case %d: %lld\n",i,l);
		else printf( "Case %d: impossible\n",i);
	}
}
int judge1(int temp)
{
	int sum = 0;
	while(temp)
	{
		sum += (temp/5);
		temp /= 5;
	}
	if(sum == n)  return 1;
	else return 0;
}

int judge(int temp)
{
	int sum = 0;
	while(temp)
	{
		sum += (temp/5);
		temp /= 5;
	}
	if(sum >= n)	return 1;
	else return 0;
	
}


