///////////////////////////////////////////////////////////////
// File Name: 231_2.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-09-10 12:16:07
// Description:
///////////////////////////////////////////////////////////////

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int time = 0;

        if (n <= 0) return false;

        while(n) {
            
            if(n&1){
                
                time++;
            }

            n = n >>1;

           if (time > 1) {

                 return false;
           }
        }

        return true;
    }
};
