//##################################################################
// File Name: F-21.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年08月09日 星期日 13时19分16秒
//=============================================================
//!/usr/bin/python

#include <iostream>


using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--){
		int a[100005];
		int n = 0;
		long long sum = 0;
		long long result = 0;
		
		cin >> n;
		for(int i = 0 ; i < n ; i ++ ){
			cin >> a[i];
			sum += a[i];
		}

		int ave = sum/n;

		for(int i = 0 ; i < n ; i ++ ){
			if(a[i] > ave){
				result += (a[i] - ave);
			}
		
		}
		cout << result << endl;
	
	}



	return 0;
}
