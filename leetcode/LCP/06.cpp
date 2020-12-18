///////////////////////////////////////////////////////////////
// File Name: 06.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-12-16 23:02:30
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    int minCount(vector<int>& coins) {

        int sum = 0;

        for(int i : coins) {

            sum += (i+1) / 2;
        }

        return sum;
    }
};
