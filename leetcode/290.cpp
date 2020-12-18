///////////////////////////////////////////////////////////////
// File Name: 290.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-12-16 22:55:42
// Description:
///////////////////////////////////////////////////////////////

/*样例: 
 * "abba" "dog dog dog dog"
 * "aaa" "aa aa aa aa"
 *
 *
 * */


class Solution {

vector<string> word;

public:

    void getWord(string& s) {

        string res;

        for(int i = 0; i < s.length(); i ++) {

            if(s[i] != ' ' && s[i] != '\0') {

                res += s[i];
            }else {

                word.push_back(res);
                res = "";
            }
        }

        word.push_back(res);   
    }
    bool wordPattern(string pattern, string s) {
        
        getWord(s);

        if(word.size() != pattern.length()) return false;
        map<char, string> res;

        for(int i = 0; i < pattern.length(); i ++) {

            auto it = res.find(pattern[i]);
            if(it != res.end()) {

                //存在则判断这个单词和vaule 是否相同
                if(res[pattern[i]] != word[i]) return false;
            }else {

                res[pattern[i]] = word[i];
            }
        }

        for(int i = 0; i < pattern.length(); i ++) {

            for(int j = 0; j < pattern.length(); j ++) {

                if(pattern[i] != pattern[j]) {

                    if(res[pattern[i]] == res[pattern[j]]) return false;
                }
            }
        }

        return true;
    }
};
