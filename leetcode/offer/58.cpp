///////////////////////////////////////////////////////////////
// File Name: 58.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-07 22:31:01
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    string reverseLeftWords(string s, int n) {

        const string tmp = s;
        int size = s.size();

        for(int i = 0; i < size; i ++) {

            int re = i - n;
            if(re < 0) re += size;

            s[re] = tmp[i];
        }

        return s;
    }
};
