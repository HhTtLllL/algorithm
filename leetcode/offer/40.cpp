///////////////////////////////////////////////////////////////
// File Name: 40.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-07 22:06:15
// Description:
///////////////////////////////////////////////////////////////

class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {

        sort(arr.begin(), arr.end());

        vector<int> res;

        for(int i = 0; i < k; i++) {

            res.push_back(arr[i]);
        }

        return res;
    }
};
