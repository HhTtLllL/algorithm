#include<cstdio>
#include<iostream>

using namespace std;

int a[105][1005];
int weight[105];
int value[105];
int main( )
{
	int sumvalue,sumnum;
	cin >> sumvalue >> sumnum;
	for(int i = 1;i <= sumnum;i++)  cin >> weight[i] >> value[i];

	for(int i = 1;i <= sumnum;i++)
	{
		for(int c = 1;c <= sumvalue;c++)
		{
			if(weight[i] > c)   a[i][c] = a[i-1][c];
			else
			{
				int value1 = a[i-1][c-weight[i]] + value[i];
				int value2 = a[i-1][c];
				a[i][c] = max(value1,value2);
			}
		}
	}

	printf( "%d",a[sumnum][sumvalue]);
}
