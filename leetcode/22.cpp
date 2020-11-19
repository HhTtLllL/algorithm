///////////////////////////////////////////////////////////////
// File Name: 22.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-18 14:32:12
// Description:
///////////////////////////////////////////////////////////////
class Solution {

vector<string> res;

bool judge(string s) {

    int size = s.size();

    int flag = 0;
    for(int i = 0; i < size; i ++) {

        if(s[i] == '(') flag ++;
        if(s[i] == ')') flag--;

        if(flag < 0) return false;
    }

    if(flag == 0) return true;
    else return false;
}


void recursion(int level, int n, string path) {

    if(level == n*2) {
     
        if(judge(path))  res.push_back(path);
        
        return ;
    }

    recursion(level + 1, n, path + '(');
    recursion(level + 1, n, path + ')');
}


public:
    vector<string> generateParenthesis(int n) {

        recursion(1, n, "(");


        return res;
    }
};
