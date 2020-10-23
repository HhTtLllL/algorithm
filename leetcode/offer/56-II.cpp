///////////////////////////////////////////////////////////////
// File Name: 56-II.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-10-22 19:37:43
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int size = nums.size() - 1;
        if(nums[0] != nums[1]) return nums[0];
        if(nums[size - 1] != nums[size]) return nums[size];

        for(int i = 1; i < size; i ++ ) {

            if(nums[i - 1] != nums[i] && nums[i] != nums[i + 1]) return nums[i]; 
        }

        return 0;
    }
};
