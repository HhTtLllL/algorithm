//##################################################################
// File Name: 01字符串.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月12日 星期四 11时14分16秒
//=============================================================
//!/usr/bin/python

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(5,0);

	for( int i = 0 ; i < 32 ; i ++ )
	{
		int tmp = 1;
		int k = i;

		for(int j = 0 ; j < 5 ; j ++ )
		{
			v[4-j] = (tmp&k);
			k /= 2;
		}

		for( int j = 0 ; j < 5; j ++ )
		{
			cout << v[j];
		}
		cout << endl;

	}


	return 0;
}
