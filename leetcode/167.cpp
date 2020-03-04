//##################################################################
// File Name: 167.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月04日 星期三 18时11分01秒
//=============================================================
//!/usr/bin/python
//暴力解法没有充分利用原数组的性质 -- 有序
//有序 ？  二分搜索

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

    }
};

//O(n)  对撞指针  双索引技术
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
	    int l = 0;r = numbers.size() - 1;  // 首先设定两个指针
	    while(l < r)  // 题目要求找到两个不同的索引,所以，l != r
	    {
		    if( numbers[l] + numbers[r] == target) //一定有解
		    {
			    int res[2] = {l+1,r+1};
			    return vector<int>(res,res + 2);
		    }
		    else if( numbers[l] + numbers[r] < target)
			 l ++;
		    else r --;
	    }
    }
};
