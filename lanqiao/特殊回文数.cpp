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
	int tmp[10];

	for(int i = 10001 ; i < 1000000 ; i ++ )
	{
		if(i < 100000)
		{
			tmp[0] = i%10;
			tmp[1] = (i/10)%10;
			tmp[2] = (i/100)%10;
			tmp[3] = (i/1000)%10;
			tmp[4] = i/10000;

			if(tmp[0] == tmp[4] && tmp[1] == tmp[3])
			{
				int res = tmp[0] + tmp[1] + tmp[2] + tmp[3] + tmp[4] ;
				if(res == n) cout << i << endl;
				else continue;
			}
		}
		else 
		{
			tmp[0] = i%10;
			tmp[1] = (i/10)%10;
			tmp[2] = (i/100)%10;
			tmp[3] = (i/1000)%10;
			tmp[4] = (i/10000)%10;
			tmp[5] = i/100000;
			
			if(tmp[0] == tmp[5] && tmp[1] == tmp[4] && tmp[2] == tmp[3])
			{
				int res = tmp[0] + tmp[1] + tmp[2] + tmp[3] + tmp[4] + tmp[5];
				if(res == n) cout << i << endl;
				else continue;
			}
		}
	}

	return 0;
}
