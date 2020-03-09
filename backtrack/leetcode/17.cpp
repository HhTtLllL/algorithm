//##################################################################
// File Name: 17.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月09日 星期一 18时00分51秒
//=============================================================
//!/usr/bin/python
//时间复杂度: 3^n  = O(2^n)   
class Solution {
	vector<string> res;
private:
	const string letterMap[10] = {
	"",
	"",
	"abc",
	"def",
	"ghi",
	"jkl",
	"mno",
	"pqrs",
	"tuv",
	"wxyz"
	}
	//s 中保存了此时从digits[0...index-1]翻译得到的一个字母字符串
	//寻找digits[index]匹配的字母,获得digits[0...index]翻译得到的解
	void find(const string &digits,int index,const string &s)
	{
		if( index == digits.size())
		{
			//保存s
			res.push_back(s);

			return ;
		}
		char c = digits[index];
		string temp = letterMap[c - '0'];

		for( int i = 0 ; i < temp.size() ; i ++ )
		{
			find( digits,index + 1,s + temp[i]);
		}
	}

public:
    vector<string> letterCombinations(string digits) {
	    
	    find(digits,0,"");

	    return res;



    }
};
