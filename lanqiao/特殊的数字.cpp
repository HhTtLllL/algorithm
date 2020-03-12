//##################################################################
// File Name: 特殊的数字.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月12日 星期四 10时57分47秒
//=============================================================
//!/usr/bin/python
#include <iostream>

using namespace std;

int main()
{
	for(int i = 100 ; i < 1000 ; i ++ )
	{
		int a = i%10;
		int b = (i/10)%10;
		int c = i/100;
		int res = a * a * a + b * b * b + c * c * c;
		if( res == i) cout << i << endl;
	}

	return 0;
}
