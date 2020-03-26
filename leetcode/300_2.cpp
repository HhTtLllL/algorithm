//##################################################################
// File Name: 300_2.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月26日 星期四 15时58分18秒
//=============================================================
//!/usr/bin/python

//动态规划
class Solution {
public: 
    int lengthOfLIS(vector<int>& nums) {

	    if( nums.szie() == 0) return 0;

	    //memo[i] 表示以nums[i] 为结尾的最长上升子序列的长度
	    vector<int> memo( nums.size() , 1);
	    for( int i = 1 ; i < nums.szie() ; i ++ )
	    {
		    for( int j = 0 ; j < i ; j ++ )
		    {
			    if( nums[j] < nums[i] )
			    {
				    memo[i] = max( memo[i] , 1 + memo[j] );
			    }
		    }
	    }

	    int res = 1;

	    for( int i = 0; i < nums.size() ; i ++ )
	    {
		    res = max( res , memo[i] );
	    }

	    return res;
	     

    }
};
