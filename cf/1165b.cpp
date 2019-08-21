#include<iostream>
#include<algorithm>

using  namespace std;

int a[200005];
int main()
{
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++)   cin >> a[i];
	
	sort(a+1,a+1+n);
	int j = 1;// 代表天数
	int sum = 0; //累计总数
	for(int i = 1;i <= n;i++)
	{
		if(a[i] >= j)
		{
			j++;
			sum++;
		}
	}

	cout << sum << endl;
}
