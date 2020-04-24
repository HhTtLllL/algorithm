//##################################################################
// File Name: 191.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年04月23日 星期四 22时30分46秒
//=============================================================
//!/usr/bin/python

class Solution {
public:
    int hammingWeight(uint32_t n) {
	    int sum = 0;

	    while(n)
	    {
		    if(n&1) sum++;
		    n = n >> 1;
	    }
    }
};
