///////////////////////////////////////////////////////////////
// File Name: 58-1.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-12-21 19:49:26
// Description:
///////////////////////////////////////////////////////////////
class Solution {

public:


    vector<string> getWord(string &s) {

        vector<string> word;

        int i = 0;
        string tmp = "";

        while(s[i] != '\0') {

            if(s[i] == ' ') {

                if(tmp != "") {

                    //word.push_front(tmp);
                    word.insert(word.begin(), tmp);
                    tmp = "";
                    i++;
                    continue;
                }
                else {

                    i++;
                    continue;
                }
            }

            tmp += s[i++];
        }

        if(tmp != "")   word.insert(word.begin(), tmp);

        return word;
    }
    string reverseWords(string s) {

        if(s == "") return "";
 
        vector<string> word = getWord(s);


        if(word.size() == 0) return "";
        string res = word[0];

        

        for(int i = 1; i < word.size(); i ++) {

            res += " ";
            res += word[i];
        }


        return res;

    }
};
