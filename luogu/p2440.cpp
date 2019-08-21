/*
 * 木材厂有一些原木，现在想把这些木头切割成一些长度相同的小段木头（木头有可能有剩余），需要得到的小段的数目是给定的。当然，我们希望得到的小段木头越长越好，你的任务是计算能够得到的小段木头的最大长度。木头长度的单位是cm。原木的长度都是正整数，我们要求切割得到的小段木头的长度也是正整数。

例如有两根原木长度分别为11和21，要求切割成到等长的6段，很明显能切割出来的小段木头长度最长为5.
*/

#include<algorithm>
#include<iostream>
#include<cstdio>

using namespace std;

int a[100005];
int n,sum;
int judge(int temp);

int main( )
{
	cin >> n >> sum;
	for(int i = 1;i <= n;i++)  cin >> a[i];

	sort(a+1,a+1+n);
	int r = a[n];
	int l = 0;
	int ans = 0;
	while(l <= r)
	{
		int mid = (l+r) >> 1;
		if(judge(mid))	l = mid+1;
		else r = mid-1;
	}
	
	cout << r << endl;

	
	return 0;
}


int judge(int temp)
{
	int sum1 = 0;
	if(temp == 0)  return 1;
	for(int i = 1;i <= n;i++)
	{
		sum1 += (a[i]/temp);
		if(sum1 >= sum) return 1;
	}

	return 0;
}
