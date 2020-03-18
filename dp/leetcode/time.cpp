//##################################################################
// File Name: time.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月18日 星期三 20时44分08秒
//=============================================================
//!/usr/bin/python

#include <iostream>

using namespace std;

int main()
{
	time_t startTime = clock();

	time_t endTime = clock();

	cout << "time : " << double(endTime - startTime)/CLOCKS_PER_SEC << " s" << endl; 


	return 0;
}
