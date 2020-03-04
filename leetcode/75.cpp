//##################################################################
// File Name: 75.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月04日 星期三 17时19分01秒
//=============================================================
//!/usr/bin/python

//计数排序  --适用于元素范围特别少的数组排序  
//这里统计 0,1,2的个数 
// 前两个方法使用的是 计数排序
// 第三个方法使用的是 三路快排的思想
class Solution {
public:
    void sortColors(vector<int>& nums) {

	    int zero_nums = 0,one_nums = 0,two_nums = 0;

	    for( int i = 0 ;i < nums.size() ; i ++ )
	    {
		    if(nums[i] == 0) zero_nums++;
		    else if( nums[i] == 1 ) one_nums++;
		    else if( nums[i] == 2) two_nums++;
	    }

	    for(int i = 0 ; i < zero_nums ; i ++ )
	    {
		    nums[i] = 0;
	    }

	    for( int i = zero_nums;i < zero_nums + one_nums ; i ++)
	    {
		    nums[i] = 1;
	    }

	    for( int i = zero_nums + one_nums ; i < zero_nums + one_nums + two_nums ; i ++)
	    {
		    nums[i] = 2;
	    }

    }
};

class Solution {

public:
	void sortColors(vector<int>& nums)
	{
		int count[3] = {0};  //存放0,1,2 三个元素出现的频率
		for( int i = 0; i < nums.size() ; i++)
		{
			count[nums[i]]++;
		}

		int index =  0;
		for( int i = 0 ; i < count[0] ; i++) nums[index++] = 0;
		for( int i = 0 ; i < count[1] ; i++) nums[index++] = 1;
		for( int i = 0 ; i < count[2] ; i++) nums[index++] = 2;

	}

};


class Solution{

	public:
		//时间复杂度: O(n)
		//空间复杂度: O(1)
		
		void sortColors(vector<int>& nums)
		{
			//2 0 2 1 1 0
			//zero 代表的是 从 0,到zero 的区间内，数据都为0 ，
			//所以zero 初值应取为 -1,不能取0，否则第一个元素 都会被默认为0
			int zero = -1; //num[0..zero] == 0
			int two = nums.size();  //不能取 (n - 1)  ,原因同上
			for( int i = 0 ; i < two ; )
			{
				if( nums[i] == 1 ) i++;
				else if( nums[i] == 2 )
				{
					two --;
					swap( nums[i],nums[two]);
				}
				else  //nums[i] == 0
				{
					zero ++;
					swap( nums[zero] ,nums[i++] );
				}
			}
		}
};
