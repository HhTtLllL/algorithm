///////////////////////////////////////////////////////////////
// File Name: 338.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-09-14 22:21:45
// Description: 比特位计数
///////////////////////////////////////////////////////////////

//16ms   O(nk)
class Solution {
public:
    vector<int> countBits(int num) {
    
        vector<int> res;
        for(int i = 0 ; i <= num ; i ++ ){

            res.push_back(countbits(i));
        }

        return res;
    }

private:
    int countbits(int n)
    {
        int count = 0;
        while(n)
        {

            if(n & 1) count++;
            
            n = n >> 1;
        }

        return count;
    }
};


//O(n)
class Solution {
public:
    vector<int> countBits(int num) {

        vector<int> res(num+1, 0);
        int i = 0,b = 1;

        while(b <= num){

            while(i < b && (i + b) <= num){
            
                res[i + b] = res[i] + 1;
                i++;
            }
            
            i = 0;
            b <<= 1;
        }

        return res;
    }
};











