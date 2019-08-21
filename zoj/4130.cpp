#include<iostream>
#include<algorithm>

using namespace std;

char  a[1000005];

int n,k;
int sum;
int judge(int temp);
int main( )
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		int l = 1,r = n;
		for(int i = 1;i <= n;i++)
		{
			cin >> a[i];
			if(a[i] == 1)  sum++;
		}

		while(l < r)
		{
			int mid = (l+r) >> 1;
			if(judge(mid))
			{
				r = mid;
			}
			else l = mid + 1;
		}

		cout << l << endl;
	}
}

int judge(int temp)
{
	int num = sum;
	int temp2;
	int cnt = 0;
	for(int i = 1;i <= n;i++)
	{
		temp2 = temp;
		if(a[i] == '1')
		{
			while(temp2--)
			{
				if(a[i] == '1')  num--;
				i++;
			}
			i--;
			cnt++;
		}
	}

	if(cnt <= k)  return 1;
	else return 0;

}
