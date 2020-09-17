///////////////////////////////////////////////////////////////
// File Name: 17.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-09-15 11:14:31
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    vector<int> printNumbers(int n) {

        vertor<int> res;

        int num = 9;

        for(int i = 1 ; i < n ; i ++ )
        {
            num = num*10 + 9;
        }

        for(int i = 1 ; i <= num ; i ++)
        {
            res.push_back(i);
        }

        return res;
    }
};



///////////////////////////////////////////////////////////////
// File Name: 17.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-09-15 11:14:31
// Description:
///////////////////////////////////////////////////////////////
// 优化，使用数组代替 vector 
class Solution {
public:
    vector<int> printNumbers(int n) {

        int num = 9;

        for(int i = 1 ; i < n ; i ++ )
        {
            num = num*10 + 9;
        }

        int res[num + 1];

        for(int i = 1 ; i <= num ; i ++)
        {
            res[i - 1] = i;
        }

        return vector<int>(res, res + num);
    }
};
