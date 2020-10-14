///////////////////////////////////////////////////////////////
// File Name: 12.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-10-09 22:27:41
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {

        int row = 0, col = 0;
        row = board.size();
        if(row > 0) {
            col = board[0].size(); 
        }

        int size = word.size();

        for(int i = 0; i < row; i ++ ){

            for(int j = 0; j < col; j ++ ){

                dfs(board, )
            }
        }

    }
};
