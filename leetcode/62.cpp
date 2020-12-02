///////////////////////////////////////////////////////////////
// File Name: 62.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-12-02 17:26:22
// Description:
///////////////////////////////////////////////////////////////
class Solution {

int a[100 + 5][100 + 5] = {0};

public:
    int uniquePaths(int m, int n) {
        
        for(int i = 0; i < m; i ++) a[i][0] = 1;
        for(int i = 0; i < n; i ++) a[0][i] = 1;


        for(int i = 0; i < m; i ++)  {

            for(int j = 0; j < n; j ++) {

                if(a[i][j] == 0) {

                    a[i][j] = a[i - 1][j] + a[i][j - 1];
                }
            }
        }
        return a[m - 1][n - 1];
    }
};
