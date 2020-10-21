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


//双端队列
class Solution {
public:
    vector<int> exchange(vector<int>& nums) {

        deque<int> d;

        int size = nums.size();
        for(int i = 0; i < size; i ++) {

            if(nums[i] & 1) d.push_front(nums[i]);
            else d.push_back(nums[i]);
        }

        return vector<int>(d.begin(), d.end());
    }
};
