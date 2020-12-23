///////////////////////////////////////////////////////////////
// File Name: 42.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-12-21 20:29:49
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        for(int i = 1; i < nums.size(); i ++) {

            nums[i] = max(nums[i], nums[i - 1] + nums[i]);
        }


        int Max = nums[0];

        for(int i = 1; i < nums.size(); i ++) {

            if(nums[i] > Max) {

                Max = nums[i];
            }
        }

        return Max;
    }
};
