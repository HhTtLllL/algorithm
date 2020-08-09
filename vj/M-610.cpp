//##################################################################
// File Name: M-610.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年08月09日 星期日 14时07分46秒
//=============================================================
//!/usr/bin/python


#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--){
	
		long long n = 0,k = 0;

		cin >> n >> k;

		while(k--){
			n = (n+1)/2;
			if(n <= 1) break;
		}

		cout << n << endl;;
	}

	return 0;
}
