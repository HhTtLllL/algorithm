//##################################################################
// File Name: 219.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月06日 星期五 15时15分55秒
//=============================================================
//!/usr/bin/python
//时间复杂度: O(n)
//空间复杂度: O(k)
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

	    //查找表
	    unordered_set<int> record;
	    for( int i = 0 ; i < nums.size() ; i ++ )
	    {
		    if( record.find(nums[i]) != record.end() )
		    {
			    return true;
		    }

		    //如果没找到，就将这个数纳入查找表中
		    record.insert( nums[i] );

		    //判断是否set 的个数是否超出了
		    //因为要维护一个窗口,k 
		    if( record.size() == k+1 )
		    {
			    record.erase( nums[i - k] );
		    }
	    }

	    return false;


    }
};
