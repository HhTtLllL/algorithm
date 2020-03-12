//##################################################################
// File Name: 字符串对比.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月12日 星期四 11时50分44秒
//=============================================================
//!/usr/bin/python

#include <iostream>
#include <algorithm>
#include <iterator>
#include <cctype>
#include <string>
using namespace std;

int main()
{
	string a,b;
	cin >> a >> b;
	if(a.size() != b.size() ) 
	{ 
		cout << 1 << endl;
		return 0;
	}
	else if(a == b) {cout << 2 << endl; return 0;}

	string tmpa,tmpb;
	transform(a.begin(),a.end(),back_inserter(tmpa),::toupper);
	transform(b.begin(),b.end(),back_inserter(tmpb),::toupper);

	if(tmpa == tmpb) 
	{
		cout << 3 << endl;
		return 0;
	}
	else cout << 4 << endl;



	return 0;
}
