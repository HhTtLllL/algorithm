//##################################################################
// File Name: 26.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年04月12日 星期日 20时57分00秒
//=============================================================
//!/usr/bin/python

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;

            for( int i = 0 ; i < nums.size() - 1 ; i ++ )
            {
                    if(nums[i] == nums[i+1])
                    {
                        nums.erase(nums.begin() + i + 1);
                        i--;
                    }
            }

            return nums.size();
    }
};
