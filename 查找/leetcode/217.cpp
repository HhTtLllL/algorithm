//##################################################################
// File Name: 217.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月06日 星期五 15时32分13秒
//=============================================================
//!/usr/bin/python
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
	    
	    unordered_set<int> record;
	    for( int i = 0 ; i < nums.size() ; i ++ )
	    {
		    if( record.find( nums[i] ) != record.end() )
			    return true;

		    record.insert( nums[i] );

	    }

	    return false;

    }
};
