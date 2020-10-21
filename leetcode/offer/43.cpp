///////////////////////////////////////////////////////////////
// File Name: 43.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-10-19 16:15:44
// Description:
///////////////////////////////////////////////////////////////

//暴力　超时
class Solution {
public:
    int count(int x) {

        int sum = 0;

        while(x) {

            if(x%10 == 1) sum++;
            x /= 10;
        }

        return sum;
    }
    int countDigitOne(int n) {

        int res = 0;
        for(int i = 0; i <= n; i ++){

            res += count(i);
        }


        return res;
    }
};
