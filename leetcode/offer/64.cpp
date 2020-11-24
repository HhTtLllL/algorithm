///////////////////////////////////////////////////////////////
// File Name: 64.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-24 18:34:50
// Description:
///////////////////////////////////////////////////////////////
class Solution {

int sum = 0;

public:
    int sumNums(int n) {
        
        (n > 1 && sumNums(n - 1)) > 0;

        sum += n;

        return sum;
    }
};
