///////////////////////////////////////////////////////////////
// File Name: 12.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-10-09 22:27:41
// Description:
///////////////////////////////////////////////////////////////
class Solution {
    
private:

    int row = -1;
    int col = -1;

public:

    bool dfs(vector<vector<char>>& board, int cur, string& word, int size, int i, int j) {

        if( i < 0 || i >= row || j < 0 || j >= col || board[i][j] == '/') return false;

        char tmp = board[i][j];
        if(tmp != word[cur]) return false;
        board[i][j] = '/';


        if(size == cur) {

            return true;
        }

        bool res = dfs(board, cur + 1, word, size, i, j + 1) || 
                   dfs(board, cur + 1, word, size, i, j - 1) ||
                   dfs(board, cur + 1, word, size, i + 1, j) || 
                   dfs(board, cur + 1, word, size, i - 1, j);

        board[i][j] = tmp;

        return res;
    }

    bool exist(vector<vector<char>>& board, string word) {
        row = board.size();
        int size = word.size() - 1;

        if(row > 0) {
            
            col = board[0].size();
        }

        for(int i = 0; i < row; i ++) {
            for(int j = 0; j < col; j ++) {
                if (dfs(board, 0, word, size,i,j)) return true;
            }
        }

        return false;
    }
};
