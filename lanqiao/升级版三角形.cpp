//##################################################################
// File Name: 升级版三角形.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月21日 星期六 15时30分29秒
//=============================================================
//!/usr/bin/python

#include <iostream>
#include <string>

using namespace std;

int main()
{
	char ch;
	cin >> ch;
	if(ch >= 'A' && ch <= 'Z')
	{
		int n = ch - 'A' + 1;
		for( int i = 1 ; i <= n ; i ++ )
		{
			//输出空格
			string space(n - i,' ');
			cout << space;

			//输出前一半字母
			char tmp = 'A';
			for( int j = 0 ; j < i ; j ++ )
			{
				cout << tmp;
				tmp++;
			}
			tmp -= 2;


			//输出后一半字母
			for( int j = 0 ; j < i - 1 ; j ++ )
			{
				cout << tmp;
				tmp--;
			}

			cout << endl;
		}
	}
	else
	{
		int n = ch - '1' + 1;
		for( int i = 1 ; i <= n ; i ++ )
		{

			//输出空格
			string space(n - i,' ');
			cout << space;

			//输出前一半字母
			char tmp = '1';
			for( int j = 0 ; j < i ; j ++ )
			{
				cout << tmp;
				tmp++;
			}
			tmp -= 2;


			//输出后一半字母
			for( int j = 0 ; j < i - 1 ; j ++ )
			{
				cout << tmp;
				tmp--;
			}

			cout << endl;
		}
	}



	return 0;
}
