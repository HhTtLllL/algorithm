//##################################################################
// File Name: 343_2.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月19日 星期四 22时26分48秒
//=============================================================
//!/usr/bin/python
class Solution {
public:
	int max3(int a,int b,int c)
	{
		return max(a,amx(b,c));
	}
    int integerBreak(int n) 
    {
	    //memo[i] 表示将数字 i 分隔 (至少分割成两部分)后得到的最大乘积 
	    vector<int> memo(n+1,-1);


	    memo[1] = 1;
	    for(int i = 2 ; i <= n ; i ++ )
	    {
		    for(int j = 1 ; j < i - 1 ; j ++ )
		    {
			    memo[i] = max3(memo[i],j*(i - j),j*memo[i - j] );
		    }
	    }

	    return memo[n];

    }
};
