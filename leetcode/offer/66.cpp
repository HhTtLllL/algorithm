///////////////////////////////////////////////////////////////
// File Name: 66.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-12-28 19:34:18
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    vector<int> constructArr(vector<int>& a) {

        if(a.size() <= 1) {

            return a;
        }

        vector<int> l(a.size(), 1);
        vector<int> r(a.size(), 1);
        vector<int> res(a.size(), 1);

        l[0] *= a[0];
        for(int i = 1; i < a.size(); i ++) {

            l[i] = l[i - 1] * a[i];
            
        }

        r[a.size() - 1] = a[a.size() - 1];
        for(int i = a.size() - 2; i >= 0; i --) {

            r[i] = r[i + 1] * a[i];
        }
        
        res[0] = r[1];
        res[a.size() - 1] = l[a.size() - 2];

        for(int i = 1; i < a.size() - 1; i ++) {
            
            res[i] = r[i + 1] * l[i - 1];
        }


        return res;
    }
};
