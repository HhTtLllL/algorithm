#include<cstdio>
#include<iostream>
using namespace std;

int a[100005];
int main( )
{
	int n,max1;
	int count = 0;
	cin >> n;cin >> max1;
	for( int i = 1;i <= n;i++)    scanf( "%d",&a[i]);
	int sum1 = 0;
	for(int i = 1;i <= n;i++)
	{
		sum1 =sum1 + a[i];
		if(sum1 <= max1)
		{
			continue;
		}
		else
		{
			sum1 = sum1 - a[i];
			i--;
		}

		count++;
		sum1 = 0;

	}

	cout << count+1 << endl;

}
