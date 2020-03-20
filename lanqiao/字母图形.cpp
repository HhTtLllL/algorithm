//##################################################################
// File Name: 字母图形.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月19日 星期四 23时25分36秒
//=============================================================
//!/usr/bin/python

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n,m;

	cin >> n >> m;
	vector<char> leeter(m,'A');

	for( int i = 0 ; i < m ; i ++ )
	{
		leeter[i] = leeter[0] + i;
	}

	for( int i = 0 ; i < n ; i ++ )
	{
		for( int j = 0 ; j < m ; j ++ )
		{
			cout << leeter[(j + i)%m];
		}
		cout << endl;
	}



	return 0;
}
