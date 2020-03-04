//##################################################################
// File Name: 283.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年11月26日 星期二 22时00分41秒
//=============================================================
//!/usr/bin/python

class Solution {
	//时间复杂度  O(n)
	//空间复杂度  O(1)
public:
    void moveZeroes(vector<int>& nums) 
    {
	    int nozero = 0;
	    int len = nums.size();
	    for(int i = 0;i < len;i++)
	    {
		    if(nums != 0)
		    {
			    nums[nozero] = nums[i];
			    nozero++;
		    }
	    }

	    for(int i = nozero;i < len;i++) nums[i] = 0;

	    return ;
    }
};


class Solution{

public:
	void moveZeroes(vector<int>& nums)
	{
		int k = 0;
		for( int i = 0 ; i < nums.size() ; i++)
		{
			if( nums[i] != 0 )
				if( i != k) //假设当前代码都为非零元素，则要不停的进行下去交换下去
					swap( nums[k++] , nums[i]);  //如果直接交换就可以省略 最后一步，给最后每一个元素赋值为0  
				else k++
		}

		return ;
	}

};
