///////////////////////////////////////////////////////////////
// File Name: 1295.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-09-15 11:05:26
// Description:
///////////////////////////////////////////////////////////////

class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int res = 0;

        for(int i = 0 ; i < nums.size(); i ++ )
        {
            if(countbit(nums[i])%2 == 0) res++;
        }

        return res;
    }

private:
    int countbit(int num)
    {
        int sum = 0;
        while(num)
        {
            sum++;
            num /= 10;
        }
        return sum;
    }
};
