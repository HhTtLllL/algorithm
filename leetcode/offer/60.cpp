///////////////////////////////////////////////////////////////
// File Name: 60.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-18 22:59:07
// Description:
///////////////////////////////////////////////////////////////

//第 11个样例超时   ----dfs　超时
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


///////////////////////////// DP
class Solution {

int record[15][100] = {0};

public:
    vector<double> dicesProbability(int n) {

        for(int i = 1; i <= 6; i ++) {

            record[1][i] = 1;
        }

        for(int i = 2; i <= n; i ++) {
            
            for(int j = 1; j <= 6*i; j ++) {

                for(int k = 1; k <= 6; k ++) {

                    if(j - k <= 0) break;
                    record[i][j] += record[i - 1][j - k];
                }
            }
        }

        int all = pow(6, n);
        vector<double> res;

        for(int i = n; i <= 6*n; i ++) {

            res.push_back(record[n][i] * 1.0 / all);
        }

        return res;
    }
};





