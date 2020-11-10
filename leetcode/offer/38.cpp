///////////////////////////////////////////////////////////////
// File Name: 38.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-10 22:03:03
// Description:
///////////////////////////////////////////////////////////////
class Solution {

private:
    set<string> res;
    int size;

public:

    void dfs(string& tmp, int count, string& s, vector<bool>& vis) {

        if(count == size) {

            res.insert(tmp);
        }

        for(int i = 0; i < size; i ++ ) {

            if(!vis[i]) {

                vis[i] = true;
                tmp.push_back(s[i]);
                dfs(tmp, count + 1, s, vis);
                tmp.pop_back();
                vis[i] = false;
            }
        }
    }

    vector<string> permutation(string s) {

        size = s.size();
        vector<bool> vis(size, false);
        
        string tmp;
        int count = 0;
        for(int i = 0; i < size; i ++) {

            tmp.push_back(s[i]);
            vis[i] = true;
            dfs(tmp, 1, s, vis);
            tmp.pop_back();
            vis[i] = false;
        }

        vector<string> res2;
        for(auto it = res.begin(); it != res.end(); it ++) {

            res2.push_back(*it);
        }

        return res2;
    }
};
