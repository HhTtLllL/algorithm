#include<iostream>
#include<cstdio>

using namespace std;

int a[1010][1010];

int main()
{
	int n;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
		{
			a[i][j] = (n/4 * (i/4) + j/4) * 16 + i%4*4 + j%4;
		}
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d%c", a[i][j], " \n"[j == n - 1]);
		}
	}

	return 0;
}
