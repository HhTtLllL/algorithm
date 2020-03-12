//##################################################################
// File Name: 01字符串.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月12日 星期四 11时14分16秒
//=============================================================
//!/usr/bin/python

#include <iostream>

using namespace std;

string mul(string a,string b)
{
	//cout << a << b << endl;
	string res;
	for(int i = 4 ; i >= 1; i -- ) 
	{
		cout << a << endl;
		int tmp = a[i] - '0' + b[i] - '0';
		cout << "tmp = " << tmp << endl;
		if(tmp > 1)
		{
			res[i - 1] = a[i - 1] + 1;
			res[i] = '0';
		}
		else
		{
			res[i] = '0' + tmp;
			cout << "res[i] = " << res[i] << endl;
		}
	}
	//cout << res << endl;

	res[0] = '1';
	return res;
}

int main()
{
	string a = "00000";
	string b = "00001";
	string tmp;
	/*for(int i = 0; i < 32 ; i ++ )
	{
		a = mul(a,b);
		cout << a << endl;

	}*/

	cout << mul(a,b) << endl;
	


	return 0;
}
