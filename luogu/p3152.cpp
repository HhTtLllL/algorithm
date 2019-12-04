//##################################################################
// File Name: p3152.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年12月02日 星期一 16时40分06秒
//=============================================================
//!/usr/bin/python

#include <stdio.h>
#include <iostream>
#include <math.h>

int main()
{
	int n;
	std::cin >> n;
	int ans = (log10(n)/log10(2) + 1);
	std::cout << ans << std::endl;

	return 0;
}
