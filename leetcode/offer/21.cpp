///////////////////////////////////////////////////////////////
// File Name: 21.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-09-21 17:07:51
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    vector<int> exchange(vector<int>& nums) {

        int r = nums.size(),l = 0;

        while(l < r)
        {
            for (int i = l ; i < r ; i ++){
                if(nums[i] & 1) {

                    l = i;
                }
            }


            for (int i = r ; r >= 0; i-- ){
                if(!(nums[i] & 1)) {

                    r = i;
                }
            }

            int tmp = nums[l];
            nums[l] = nums[r];
            nums[r] = tmp;
        }

        return nums;
    }
};
