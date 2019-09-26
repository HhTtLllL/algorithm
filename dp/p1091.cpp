#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int amax;
const int MAX = 100 + 10;
int a[MAX];
int lis[MAX];
int lds[MAX];


int found(int * a,int size,int x)
{
	int l = 1,r = size;

	while(l != r)
	{
		int mid = (r + l) >> 1;
		if(x > a[mid]) r = mid;
		else l = mid  + 1;
	}

	return l;
}
int main()
{

	int n;
	cin >> n;
	for(int i = 1;i <= n;i++)  cin >> a[i];
	
	amax = max_element(a + 1,a + n + 1) - a;

	int sum2 = 0;
	for(int k = 1;k <= n;k++)
	{
		memset(lis,0,sizeof(lis));
		memset(lds,0,sizeof(lds));


		int cnt = 1;
		lis[cnt] = a[1];
	
		for(int i = 2;i < k;i++)
		{
			if(a[i] > lis[cnt])  
			{
				cnt++;
				lis[cnt] = a[i];
			}
			else
			{
				int temp = lower_bound(lis + 1,lis + cnt + 1,a[i]) - lis;
				lis[temp] = a[i];
			}
		}
	
		int sum = cnt;
	
//		cout << "k = " << k << " sum1 = " << sum;
		cnt = 1;
		lds[cnt] = a[k];
	
	
		for(int i = k + 1;i <= n;i++)
		{
			if(a[i] < lds[cnt])
			{
				cnt++;
				lds[cnt] = a[i];
			}
			else
			{
				lds[found(lds,cnt + 1,a[i])] = a[i];
			}
	
		}

		sum += cnt;
//		cout <<  " sum2 " << sum << endl;


		sum2 = max(sum2,sum);
	}
	
	
	cout << n - sum2<< endl;
	return 0;
}
