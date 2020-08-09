//##################################################################
// File Name: D-8.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年08月09日 星期日 15时38分03秒
//=============================================================
//!/usr/bin/python

#include <iostream>

using namespace std;

int main()
{
	int T = 0;
	cin >> T;
	while(T--){
		
		int n = 0;
		string path;
		int point = 0,side = 0;

		cin >> n >> path;
		cin >> point >> side;


		for ( int i = 0 ; i < side ; i ++ ){
			int temp1,temp2;
			cin >> temp1 >> temp2;
		}
		side = (side - point + 1)%n;

		if(path[side] == '1') cout << "2" << endl;
		else cout << "1" << endl;
	}


	return 0;
}
