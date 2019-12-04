//##################################################################
// File Name: 1568.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年12月03日 星期二 18时45分48秒
//=============================================================
//!/usr/bin/python
#include <stdio.h>

int a[100000010];
void init()
{
	a[0] = 0;
	a[1] = 1;
	for(int i = 2;a[i-1] < 100000005;i++)
	{
		a[i] = (a[i-2] + a[i-1]);
	}

	return ;
}
int main()
{
	init();

	int n;
	while(scanf("%d",&n) != EOF) 
	{
		int temp = a[n];
		while(temp > 10000) temp /= 10;
		printf("%d\n",a[n]);
	}

	return 0;
}
