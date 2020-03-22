//##################################################################
// File Name: 造房子.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月21日 星期六 15时49分23秒
//=============================================================
//!/usr/bin/python

#include <iostream>

using namespace std;

int main()
{
	int n,m;

	cin >> n >> m;
	string sn_;
	sn_.push_back('+');
	for( int i = 0; i < m ; i ++ )
	{
		sn_ += "-+";
	}

	for( int i = 0 ; i < n ; i ++ )
	{
		cout << sn_ << endl;
		cout << '|';
		for( int j = 0 ; j < m ; j ++)
		{
			cout << "*|";
		}
		cout << endl;
	}

	cout << sn_ << endl;



	return 0;
}
