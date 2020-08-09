//##################################################################
// File Name: C-5.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年08月09日 星期日 14时41分11秒
//=============================================================
//!/usr/bin/python


#include <iostream>

using namespace std;


int main()
{

	int T = 0;
	
	cin >> T;
	
	while(T--){
		int a[1000] = {0};

		long long n = 0,k = 0;
		string path;

		cin >> n >> k >> path;

		long long distance = 0;
		long long MAX = 0;
		long long x = 0,y = 0;

		for(int i = 0 ; i < n ; i ++ ){
			a[path[i]]++;
		}
		
		int tmp = abs(a['U'] - a['D']);
		tmp += abs(a['L'] - a['R']);

		for(long long j = 0 ; j < n ; j++ ){

			if(path[j] == 'R'){
				x++;

				distance = abs(x) + abs(y);
				MAX = max(distance,MAX);
			}else if(path[j] == 'U'){
				y++;
				distance = abs(x) + abs(y);
				MAX = max(distance,MAX);
			}else if(path[j] == 'L'){
				x--;
				distance = abs(x) + abs(y);
				MAX = max(distance,MAX);
			}else if(path[j] == 'D'){
				y--;
				distance = abs(x) + abs(y);
				MAX = max(distance,MAX);
			}
			
		}
		cout << MAX + (k-1)*tmp<< endl;
	
	}
	


	return 0;
}
