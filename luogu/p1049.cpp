#include<cstdio>
#include<algorithm>
#include<iostream>

using namespace std;

int a[35][20005];
int weight[35];
int value[35];
int main( )
{
	int sumweight,sumnum;
	cin >> sumweight >> sumnum;
	for(int i = 1;i <= sumnum;i++) 
	{
		cin >> weight[i];
		value[i] = weight[i];
	}

	for(int i = 1;i <= sumnum;i++)
	{
		for(int c = 1;c <= sumweight;c++)
		{
			if(weight[i] > c)   a[i][c] = a[i-1][c];
			else
			{
				int value1 = a[i-1][c - weight[i]] + value[i];
				int value2 = a[i-1][c];
				a[i][c] = max(value1,value2);
			}
		}
	}

	cout << sumweight- a[sumnum][sumweight];

}
