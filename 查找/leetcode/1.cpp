//##################################################################
// File Name: 1.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月05日 星期四 18时28分09秒
//=============================================================
//!/usr/bin/python
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	    unorded_map<int,int> record;

	    for( int i = 0 ; i < nums.size() ; i ++ )
	    {
		    int temp = target - nums[i];
		    if( record.find( temp ) != record.end() )
		    {
			    int res[2] = {i,record[nums[i]]};
			    return vector<int>(res,res+2);
		    }
		    else 
		    {
			    record.insert(nums[i],i);
		    }
	    }

	    return vector<int>();

    }
};
