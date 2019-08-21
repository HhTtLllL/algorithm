#include<iostream>
#include<algorithm>

using namespace std;

int main( )
{
	int a[40] = {0,990,1010,1970,2030,2940,3060,3930,4060,4970,5030,5990,6010,7000};
	int a1[40] = {1};
	int a2,b,n;
	cin >> a2 >> b >> n;
	int distance = 0;
	for(int i = 14;i < 14+n;i++)  cin >> a[i];

	sort(a,a+n+13);
	
	for(int i = 1;i < n+14;i++)
	{
		for(int j = 0;j < i;j++)
		{
			if(a[i] - a[j] >= a2 && a[i]-a[j] <= b)
			{
				a1[i] += a1[j];
			}
		}
	}
	cout << a1[n+13] << endl;

	return 0;

}
