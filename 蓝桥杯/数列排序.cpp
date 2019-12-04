//##################################################################
// File Name: 数列排序.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年12月03日 星期二 22时45分11秒
//=============================================================
//!/usr/bin/python
#include <iostream>
#include <algorithm>

using namespace std;

int a[205];

int main()
{
	int n;
	cin >> n;
	
	for(int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	sort(a,a+n);

	for(int i = 0;i < n;i++)
	{
		printf("%d ",a[i]);
	}
	cout << endl;

	return 0;
}

