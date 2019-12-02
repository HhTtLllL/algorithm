//##################################################################
// File Name: 485.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年11月26日 星期二 22时25分33秒
//=============================================================
//!/usr/bin/python

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
	    int len = nums.size();
	    int MAX = 0;
	    int num = 0;
	    for(int i = 0;i < len;i++)
	    {
		    if(nums[i] == 1)
		    {
			    num++;
			    MAX = max(num,MAX);
		    }
		    else  num = 0;

	    }

	    return MAX;

    }
};
