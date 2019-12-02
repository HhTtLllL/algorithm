//##################################################################
// File Name: 344.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年11月26日 星期二 22时08分22秒
//=============================================================
//!/usr/bin/python

class Solution {
public:
    void reverseString(vector<char>& s) 
    {
	    int len = s.length();
	    for(int i = 0;i < len/2;i++)
	    {
		    char temp = s[i];
		    s[i] = s[len - i - 1];
		    s[len - i - 1] = temp;
	    }

	    return ;
    }
};
