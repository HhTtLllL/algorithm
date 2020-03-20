//##################################################################
// File Name: 343.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月19日 星期四 22时16分54秒
//=============================================================
//!/usr/bin/python
class Solution {
private:
	vector<int> memo;
	int max3(int a,int b,int c)
	{
		return max( a , max(b,c) );
	}
	//将 n 进行分割，（至少分割两部分），可以获得的最大乘积
	int breakInterger(int n)
	{
		int reslut = -1;
		if(n == 1)
			return 1;
		if(memo[i] != -1) return memo[n];

		for( int i = 1 ; i <= n-1 ; i ++ )
		{
			//i + (n - i)
			reslut = max3( reslut , i*(n - i) , i * breakInterger(n - i) );

			memo[n] = reslut;
		}

		return reslut;
	}
public:
    int integerBreak(int n) {
	    memo = vector<int>( n+1 , -1);
	    return breakInterger(n);

    }
};
