///////////////////////////////////////////////////////////////
// File Name: 1556.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-09-14 23:15:21
// Description:
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
// File Name: 1556.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-09-14 23:15:21
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    string thousandSeparator(int n) {

        string res;
        
        if (n == 0) return "0";

        int time = 0;
        while(n)
        {
            time ++;
            res += to_string(n%10);
            n /= 10;

            if(time%3 == 0 && n) res.push_back('.');
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};
