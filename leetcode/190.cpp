///////////////////////////////////////////////////////////////
// File Name: 190.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-09-10 13:21:36
// Description:
///////////////////////////////////////////////////////////////

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        uint32_t res = 0;
       
       int time = 1;
    

    for (int i = 0 ; i < 32 ; i ++ ){
        
        if(n){

            if(n & 1)    res = res | 1;
   
            if (i < 31) res = res << 1;
            n  = n >> 1;
        } else {
            if (i < 31) res = res << 1;
        }
    }   

        return res;
    }
};
