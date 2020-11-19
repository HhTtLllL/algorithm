///////////////////////////////////////////////////////////////
// File Name: 60.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-18 22:59:07
// Description:
///////////////////////////////////////////////////////////////

//第 11个样例超时   ----递归　超时
class Solution {
int record[100] = {0};

public:

    void dfs(int level, int cur, int n) {

        if(level == n) {

            record[cur]++;
            return ;
        }

        for(int i = 1; i <= 6; i++) {
            
            dfs(level + 1, cur + i, n);
        }
    }



    vector<double> dicesProbability(int n) {

        vector<double> res;
        int sum = 0;

        for(int i = 1; i <= 6; i++) {

            dfs(1, i, n);
        }

        for(int i = 0; i <= 66; i ++) {

            sum += record[i];
        }

        for(int i = 0; i <= 66; i ++) {

            if(record[i]) {
                
                res.push_back(record[i]*1.0 / (1.0 * sum));
            }
        }

        return res;
    }
};









