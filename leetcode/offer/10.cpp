///////////////////////////////////////////////////////////////
// File Name: 10.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-10-09 21:59:05
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    int fib(int n){

        int f0 = 0,f1 = 1,f2 = 0;
        for(int i = 1; i < n; i ++ ){
            
            f2 = (f0 + f1)%(1000000007);
            f0 = f1;
            f1 = f2;

        }

        if(n == 0) return 0;
        else if(n == 1) return 1;
        else return f2;
    }
};
