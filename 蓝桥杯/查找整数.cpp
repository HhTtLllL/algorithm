//##################################################################
// File Name: 查找整数.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年12月03日 星期二 22时48分39秒
//=============================================================
//!/usr/bin/python
#include <iostream>

using namespace std;

int a[1005];

int main()
{
	int n;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	int temp;
	cin >> temp;
	
	int idx = -1;
	for(int i = 0;i < n;i++)
	{
		if(a[i] == temp)
		{
			idx = i + 1;
			printf("%d\n",idx);
			return 0;
		}
	}

	printf("%d\n",idx);


	return 0;
}
