//##################################################################
// File Name: test_.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月24日 星期二 20时10分41秒
//=============================================================
//!/usr/bin/python

#include <iostream>
#include <vector>

using namespace std;

vector<int> res;

void solvetion( int n )
{
	if( n == 0)
	{
		for( int i = 0 ; i < res.size() ; i ++ )
		{
			cout << res[i] << " ";
		}
		cout << "\n";

		return ;
	}

	for( int i = 1 ; i <= n ; i ++ )
	{
		res.push_back(i);
		solvetion(n-i);
		res.pop_back();
	}

	return ;
}


int main()
{
	int n;
	cin >> n;

	if( n == 1) 
	{
		cout << "1 不能再分\n";
		abort();
	}

	
	res.push_back(1);
	solvetion(n-1);


	return 0;
}
