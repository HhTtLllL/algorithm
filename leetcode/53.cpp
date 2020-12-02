///////////////////////////////////////////////////////////////
// File Name: 53.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-12-02 18:33:59
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        vector<int> dp;
        dp.push_back(nums[0]);

        int size = nums.size();
        for(int i = 1; i < size; i ++) {

            dp.push_back(max(dp[i - 1] + nums[i], nums[i]));
        }

        int MAX = -2147483647;
        for(int i = 0; i < size; i ++) {

            if(dp[i] > MAX) {

                MAX = dp[i];
            }
        }

        return MAX;
    }
};
