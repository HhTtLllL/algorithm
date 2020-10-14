///////////////////////////////////////////////////////////////
// File Name: 39.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-10-14 21:43:05
// Description:
///////////////////////////////////////////////////////////////

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int size = nums.size();
        int res = (size + 1) / 2;
        sort(nums.begin(), nums.end());

        int sum = 1;
        for(int i = 0; i < size - 1; i ++ ) {

            if(nums[i] == nums[i + 1]) sum ++;
            else sum = 1;
            if(sum >= res) return nums[i];
        }

        return nums[0];

    }
};
