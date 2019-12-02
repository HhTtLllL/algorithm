//##################################################################
// File Name: 283.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年11月26日 星期二 22时00分41秒
//=============================================================
//!/usr/bin/python

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
	    int nozero = 0;
	    int len = nums.size();
	    for(int i = 0;i < len;i++)
	    {
		    if(nums != 0)
		    {
			    nums[nozero] = nums[i];
			    nozero++;
		    }
	    }

	    for(int i = nozero;i < len;i++) nums[i] = 0;

	    return ;
    }
};
