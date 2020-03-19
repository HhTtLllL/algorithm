//##################################################################
// File Name: 70.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月18日 星期三 22时03分15秒
//=============================================================
//!/usr/bin/python

#include <iostream>
#include <vector>

using namespace std;

#if 0
//记忆化搜索
class Solution {
	private:
		vector<int> v;
	public:
		int cul(int n)
		{
			if(n == 1) return 1;
			if(n == 2) return 2;

			if(v[n] == -1)
				v[n] = cul(n - 1) + cul(n - 2);

			return v[n];
		}


		int climbStairs(int n) {
			v = vector<int> ( n+1, -1 ); //初始化

	
			return cul(n);
		}
};
#endif

class Solution{
	public:
		int climbStairs(int n)
		{
			vector<int> v( n + 2, -1);
			v[1] = 1;
			v[2] = 2;

			for( int i = 3 ; i <= n ; i ++ )
			{
				v[i] = v[i - 1] + v[i - 2];
				cout << "v[i] = " << v[i] << endl;
			}

			return v[n];
		}
};


int main()
{
	Solution s;
	cout << s.climbStairs(1) << endl;



	return 0;
}
