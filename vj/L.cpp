//##################################################################
// File Name: L.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年08月02日 星期日 13时04分40秒
//=============================================================
//!/usr/bin/python

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string first,second;

	while(cin >> first >> second)
	{
		string sfirst = first,ssecond = second;
		int fsize,ssize;
		fsize = first.size();
		ssize = second.size();


		if(first[0] == second[0] && first[fsize-1] == second[ssize - 1] && fsize == ssize)
		{
			sort(sfirst.begin(),sfirst.end());
			sort(ssecond.begin(),ssecond.end());

			if(sfirst != ssecond){
				cout << "No" << endl;

			}else
			{
				if(first == second) cout << "Equal" << endl;
				else cout << "Yes" << endl;
			}
		}
		else cout << "No" << endl;;
	}


	return 0;
}
