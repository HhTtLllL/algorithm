///////////////////////////////////////////////////////////////
// File Name: 29.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2021-03-09 22:03:48
// Description:
///////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

using namespace std;

class Solution {

private:

    static constexpr int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};


public :
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        if(matrix.size() == 0 || matrix[0].size() == 0) {

            return {};
        }

        int rows = matrix.size(), cols = matrix[0].size();
        vector<vector<bool>> book(rows, vector<bool>(cols));

        int total = rows * cols;
        vector<int> order(total);
        

        int row = 0, col = 0;
        int dirIndex = 0;

        for(int i = 0; i < total; i ++) {
    
            order[i] = matrix[row][col];
            book[row][col] = true;
            
            int nextrow = row + dir[dirIndex][0], nextcol = col + dir[dirIndex][1];
            if(nextrow < 0 || nextrow >= rows || nextcol < 0 || nextcol >= cols || book[nextrow][nextcol]) {
    
                dirIndex = (dirIndex + 1) % 4;
            }

            row += dir[dirIndex][0];
            col += dir[dirIndex][1];
        }


        return order;
    }
};


int main(){





    return 0;
}
