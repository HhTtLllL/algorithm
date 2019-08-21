#include<cstdio>
#include<iostream>

using namespace std;
int a[30][30005];
int value[30];
int weight[30];
int main( )
{
	int summoney;
	int sumnum;
	cin >> summoney >> sumnum;
	for(int i = 1;i <= sumnum;i++)   cin >> weight[i] >> value[i]; 



	for(int i = 1;i <= sumnum;i++)   // 第 i 件商品
	{
		for(int c = 0; c <= summoney;c++)   //背包总空间
		{
			if(weight[i] > c)   a[i][c] = a[i-1][c];
			else 
			{
				int value1 = a[i - 1][c-weight[i]] + value[i]*weight[i]; //选择这件商品
				int value2 = a[i-1][c];     //不选则这件商品
				a[i][c] = max(value1,value2);
			}
		}
	}

	printf( "%d",a[sumnum][summoney]);



}
