#include<iostream>

using namespace std;

long long a[200010];
int main()
{
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++) cin >> a[i];

	if(n%2 == 0)
	{
		for(int i = 1;i <= n/2;i +=2)
		{
			int temp = a[i];
			a[i] = a[n-i+1];
			a[n-i+1] = temp;
		}
		for(int i = 1;i <= n;i++)  cout << a[i] << " ";
		cout << endl;
	}
	else
	{
		for(int i = 1;i <= n/2;i +=2)
		{
			int temp = a[i];
			a[i] = a[n-i+1];
			a[n-i+1] = temp;
		}
		for(int i = 1;i <= n;i++)  cout << a[i] << " ";
		cout << endl;
	}

	

}
