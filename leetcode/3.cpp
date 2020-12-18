//##################################################################
// File Name: 3.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月05日 星期四 15时21分01秒
//=============================================================
//!/usr/bin/python
//无重复字符的最长子串   ---滑动窗口
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
	    int freq[256] = {0};  //用来保存无重复子串的字符
	    int l = 0,r = -1;  //滑动窗口为 s[l ... r]
	    int res = 0;  //满足条件的最长子串的长度
	    while(l < s.size( ))
	    {
		    if(r + 1 < s.size() && freq[s[r + 1]] == 0) //无重复
		    {
			    r ++;
			    freq[s[r]]++;
		    }
		    else 
		    {
		    	freq[s[l]] --;
		    	l++;
		    }
		    res = max(res,r - l + 1);
	    }

	    return res;


    }
};

int main()
{
	string s("abcabcbb");

输出
1
差别
预期结果
3	Solution a;
	cout << a.lengthOfLongestSubstring(s);

	return 0;
}



class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int book[256];

        int l = 0, r = -1;
        int cnt = 0;

        while(l < s.length()) {

            if(!book[s[l]]) {       //如果这个字符没有出现过， 右边界往右扩展

                r++;
                book[s[r]] = 1;
            }else {                 //如果这个字符如果出现过，左边界往做缩小

                book[l] = 0;
                l++
            }
            
            cnt = max(cnt, r - l + 1);
        }

    }
};
