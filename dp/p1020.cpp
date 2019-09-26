#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

const int MAX = 1e6 + 10;
int a[MAX];
int lis[MAX];
int lis2[MAX];

int found(int *a,int size,int x)
{
	int l = 1,r = size;

	while(l != r)
	{
		int mid = (r + l) >> 1;
		if(x > a[mid]) r = mid;
		else l = mid + 1;
	}

	return l;

}

int main()
{
	int n = 1;
	while(~scanf("%d",&a[n])) n++;
	int tempcnt = 1;
	/*for(int i = n;i >= 1;i--)
	{
		lis2[tempcnt] = a[i];
		tempcnt++;
	}*/
	
	int cnt2 = 1;
	lis[cnt2] = a[1];
	// 最长不上升子序列
	for(int i = 2;i < n;i++)
	{
		if(a[i] <= lis[cnt2])
		{
			cnt2++;
			lis[cnt2] = a[i];
		}
		else
		{
			lis[found(lis,cnt2 + 1,a[i])] = a[i];
			/*int temp  = upper_bound(lis + 1,lis + cnt2 + 1,a[i]) - lis;
			lis[temp] = a[i];*/



		}
	}



	int cnt = 1;

	//最长上升自序
	memset(lis,0,sizeof(lis));

	lis[cnt] = a[1];
	for(int i = 2;i < n;i++)
	{
		if(a[i] > lis[cnt])
		{
			cnt++;
			lis[cnt] = a[i];
		}
		else
		{
			int temp  = lower_bound(lis + 1,lis + cnt + 1,a[i]) - lis;
			lis[temp] = a[i];
		}
	}

	cout << cnt2 << endl;
	cout << cnt << endl;



	return 0;
}
