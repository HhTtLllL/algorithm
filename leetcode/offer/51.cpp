///////////////////////////////////////////////////////////////
// File Name: 51.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-24 18:12:36
// Description:
///////////////////////////////////////////////////////////////
//
//O(n2) 超时
class Solution {
public:
    int reversePairs(vector<int>& nums) {

        int n = nums.size();

        int sum = 0;
        for(int i = 0; i < n; i ++) {

            for(int j = i + 1; j < n; j ++) {

                if(nums[i] > nums[j]) sum++;
            }
        }

        return sum;
    }
};
