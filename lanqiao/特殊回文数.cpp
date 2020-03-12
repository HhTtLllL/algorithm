//##################################################################
// File Name: 特殊回文数.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月12日 星期四 10时34分18秒
//=============================================================
//!/usr/bin/python

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


int main()
{
	int n;
	cin >> n;

	for(int i = 10001 ; i < 1000000 ; i ++ )
	{
		//string tmp = to_string(i);
		char tmp[10];
		sprintf(tmp,"%d",i);
		if(i < 100000)
		{
			if(tmp[0] == tmp[4] && tmp[1] == tmp[3])
			{
				int res = tmp[0] - '0' + tmp[1] - '0' + tmp[2] - '0' + tmp[3] - '0' + tmp[4] - '0';
				if(res == n) cout << i << endl;
				else continue;
			}
		}
		else 
		{
			if(tmp[0] == tmp[5] && tmp[1] == tmp[4] && tmp[2] == tmp[3])
			{
				int res = tmp[0] - '0' + tmp[1] - '0' + tmp[2] - '0' + tmp[3] - '0' + tmp[4] - '0' + tmp[5] - '0';
				if(res == n) cout << i << endl;
				else continue;
			}
		}
	}

	return 0;
}
