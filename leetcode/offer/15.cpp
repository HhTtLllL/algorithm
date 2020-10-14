///////////////////////////////////////////////////////////////
// File Name: 15.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-10-09 23:05:25
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    int hammingWeight(uint32_t n) {

        int cnt = 0;
        while(n)
        {
            if(n & 1) cnt++;
            n = n >> 1;
        }

        return cnt;
    }
};
