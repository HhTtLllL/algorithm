#include<iostream>
#include<algorithm>

using namespace std;

int a[5][10005];
int b[5][10005];

int main( )
{
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++)	cin >> a[1][i];
	for(int i = 1;i <= n;i++)       cin >> a[2][i];

	int high1 = 0,hight2 = 0;

	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			b[i][j] = max(b[i-1][j-1] + a[i][j],)
		}
	}
	

}
