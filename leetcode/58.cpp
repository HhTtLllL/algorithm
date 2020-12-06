///////////////////////////////////////////////////////////////
// File Name: 58.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-12-05 16:32:35
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    int lengthOfLastWord(string s) {

        int len = s.length();
        int cnt = 0;

        while(s[len - 1] == ' ') len--;
        
        for(int i = 0; i < len; i ++) {

            if(s[i] != ' ') cnt++;
            else if (s[i] == ' ' && i == (len - 1)){

                continue;
            }else {

                cnt = 0;
            }
        }

        
        return cnt;
    }
};
