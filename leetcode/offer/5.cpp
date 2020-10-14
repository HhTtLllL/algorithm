///////////////////////////////////////////////////////////////
// File Name: 5.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-09-29 16:44:51
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    string replaceSpace(string s) {

                string res;
                        int size = s.size();

                        for(int i = 0; i < size; i ++ ){

                            if(s[i] == ' '){
                                                res += "%20";
                                                            
                            }else {

                                                res += s[i];
                                                            
                            }
                                    
                        }

                                return res;
                                    
    }
    
};
