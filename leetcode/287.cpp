//##################################################################
// File Name: 287.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年04月30日 星期四 22时31分25秒
//=============================================================
//!/usr/bin/python
class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
	    //排序
	    /*sort(nums.begin(),nums.end());

	    for( int i = 0 ; i < nums.size() - 1 ; i ++ )
	    {
		    if(nums[i] == nums[i+1])
		    {
			    return nums[i];
		    }
	    }*/

	    //集合
	    set<int> res;

	    for( int i = 0 ; i < nums.size() ; i ++ )
	    {
		    if( res.find(nums[i]) == res.end() ) return nums[i];
		    res.insert(nums[i]);
	    }


	    return 0;

    }
};
