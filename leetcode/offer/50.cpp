///////////////////////////////////////////////////////////////
// File Name: 50.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-10-14 21:42:44
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    char firstUniqChar(string s) {

        int idx[27] = {0};
        int size = s.size();

        for(int i = 0; i < size; i ++ ) {
            idx[s[i] - 'a']++;
        }

        for(int i = 0 ; i < size; i ++ ) {

            if(idx[s[i] - 'a'] == 1) {
                return s[i];
            }
        }

        return ' ';
    }
};
