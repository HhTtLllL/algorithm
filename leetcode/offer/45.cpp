///////////////////////////////////////////////////////////////
// File Name: 45.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-12-23 16:18:52
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    string minNumber(vector<int>& nums) {

        vector<string> res;

        for(int i = 0; i < nums.size(); i ++) {

            res.push_back(to_string(nums[i]));
        }

        sort(res.begin(), res.end(), [](string s1, string s2) { return s1 + s2 < s2 + s1; });

        string ans;

        for(int i = 0 ; i < res.size(); i ++) {

            ans += res[i];
        }


        return ans;
    }
};
