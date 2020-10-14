///////////////////////////////////////////////////////////////
// File Name: 4.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-09-29 14:14:48
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {

        if(matrix.empty()) return false;
        if(matrix[0].empty()) return false;
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i = 0; i < row; i ++ ){

            if(target >= matrix[i][0] && target <= matrix[i][col-1]){

                for(int j = 0; j < col; j ++ ){
                    if(target == matrix[i][j]) return true;

                }
            }
        }

        return false;
    }
};
