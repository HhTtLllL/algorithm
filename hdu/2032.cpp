//##################################################################
// File Name: 2032.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年12月04日 星期三 21时51分28秒
//=============================================================
//!/usr/bin/python

#include <stdio.h>
#define MAXLEN 35


int a[MAXLEN][MAXLEN];

void init()
{
	a[0][0] = 1;
	a[1][0] = 1;
	a[1][1] = 1;

	for(int i = 2;i <= 30;i++)
	{
		a[i][0] = 1;
		for(int j = 1;j < i;j++)
		{
			a[i][j] = a[i-1][j-1] + a[i-1][j];
		}
		a[i][i] = 1;
	}
}

void print(int step)
{
	for(int i = 0;i < step;i++)
	{
		for(int j = 0;j <= i;j++)
		{
			if(j == 0) printf("%d",a[i][j]);
			else printf(" %d",a[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	init();
	int n;
	while(scanf("%d",&n) != EOF)
	{
		print(n);
		printf("\n");
	}




	return 0;
}
