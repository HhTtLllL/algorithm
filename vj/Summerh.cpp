#include<iostream>
#include<algorithm>

using namespace std;

int a[100005];

int main()
{
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++)  cin >> a[i];
	sort(a+1,a+n+1);

	int min1 = a[1];
	int max1 = a[n];
	int sum = 0;
	for(int i = 1;i <= n;i++)
	{
		if(a[i] == min1 || a[i] == max1)
		{
			continue;
		}
		sum++;
	}

	cout << sum << endl;
}
