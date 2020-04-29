//##################################################################
// File Name: 1.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年04月29日 星期三 16时58分20秒
//=============================================================
//!/usr/bin/python

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	double m,n;
	vector<double> result;

	cin >> m >> n;
	double range = (m/n)*0.1;

	int num = m/n;
	for( int i = 0 ; i < n ; i ++ )
	{
		result.push_back(num);
	}

	double temp = m - num*n;

	int j = 0;
	while(temp)
	{
		if(temp > range)
			result[j] = result[j] + range;
		else
		{
			result[j] = result[j] + temp;
			break;
		}

		temp -= range;
		j++;
		if(j > n)
		{
			cout << "无法分为满足条件的数";
			return 0;
		}
	}



	for( int i = 0 ; i < n ; i ++ )
	{
		cout << result[i] << " ";
	}







	return 0;
}
