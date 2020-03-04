//##################################################################
// File Name: 209.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月04日 星期三 18时25分41秒
//=============================================================
//!/usr/bin/python
class Solution {
	//空间复杂度  o(1)
	//时间复杂度  O(n)
public:
    int minSubArrayLen(int s, vector<int>& nums) {
	    int l = 0,r = -1;  //nums[l .. r] 为我们的滑动窗口
	    int sum = 0;
	    int res = nums.size() + 1;

	    while(l < nums.size() )  //当左边界 还可以取值的时候
	    {
		    if( r + 1 < nums.size() && sum < s )
		    {
			    r++;
			    sum += nums[r];
		    }
		    else sum -= nums[l++];

		    if( sum >= s )
			    res = min( res , r-l+1 );
	    }

	    if( res == nums.size() + 1 ) return 0;

    }
};
