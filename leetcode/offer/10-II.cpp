///////////////////////////////////////////////////////////////
// File Name: 10-II.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-18 14:30:48
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    int MOD = 1e9 + 7;
    int numWays(int n) {

        if(n == 0) return 1;
        if(n <= 2) return n;

        int n1 = 1, n2 = 2;

        int tmp = 0;
        for(int i = 2; i < n; i ++) {

            tmp = (n1 + n2) % MOD;
            n1 = n2;
            n2 = tmp;
        } 

        return tmp;
    }
};
