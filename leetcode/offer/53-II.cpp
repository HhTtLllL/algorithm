///////////////////////////////////////////////////////////////
// File Name: 53-II.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-24 18:08:07
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int size = nums.size();
        
        if(nums[0] != 0) return 0;

        for(int i = 0; i < size - 1; i ++) {
            
            if(nums[i] - nums[i + 1] != -1) {

                return i + 1;
            }
        }

        return size;
    }
};
