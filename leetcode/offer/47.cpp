///////////////////////////////////////////////////////////////
// File Name: 47.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-24 17:57:08
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {

        
        int n = grid.size();
        int m = 0;
        if(n != 0) {

            m = grid[0].size();
        } 

        vector<vector<int>> res(grid);

        for(int i = 0; i < n; i ++) {

            for(int j = 0; j < m; j ++) {
                
                if(i == 0 && j == 0) continue;
                else if(i == 0) {

                    res[i][j] = res[i][j - 1] + grid[i][j];
                }else if(j == 0) {

                    res[i][j] = res[i - 1][j] + grid[i][j];
                }else {
                    
                    res[i][j] = max(res[i - 1][j], res[i][j - 1]) + grid[i][j]; 
                }
            }
        }

        return res[n - 1][m - 1];
    }
};
