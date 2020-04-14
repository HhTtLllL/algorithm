//##################################################################
// File Name: 35.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年04月14日 星期二 21时17分09秒
//=============================================================
//!/usr/bin/python

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {   
        int num = nums.size();
            
        return lower_bound(nums.begin(),nums.begin() + num , target) - nums.begin();                                    
    }   
};


