//##################################################################
// File Name: 27.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年04月13日 星期一 21时42分47秒
//=============================================================
//!/usr/bin/python
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
	    int rec = 0;


	    for( int i = 0 ; i < nums.size() ; i ++ )
	    {
		    if(nums[i] != val)
		    {
			    nums[rec++] = nums[i];
		    }
	    }

	    return rec;
    }
};
