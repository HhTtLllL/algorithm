///////////////////////////////////////////////////////////////
// File Name: 14.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-10-09 22:49:43
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    int cuttingRope(int n) {

        if(n == 0) return 0;
        else if(n == 1 || n == 2) return 1;
        else if(n == 3) return 2;
        else if(n == 4) return 4;
        else if(n > 4) {

            int sum = 1;
            while(n > 4){

                sum *= 3;
                n -= 3;
            }

            if(n != 0) sum *= n;

            return sum;
        }

    }
};
