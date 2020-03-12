//##################################################################
// File Name: 数列特征.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月12日 星期四 11时02分43秒
//=============================================================
//!/usr/bin/python
#include <iostream>

using namespace std;

int main()
{
	int Max = -0xfffffff,Min = 0xfffffff,sum = 0;
	int n;
	cin >> n;
	while(n--)
	{
		int tmp;
		cin >> tmp;
		Max = max(tmp,Max);
		Min = min(tmp,Min);
		sum += tmp;
	}

	cout << Max << endl << Min << endl << sum << endl;



	return 0;
}
