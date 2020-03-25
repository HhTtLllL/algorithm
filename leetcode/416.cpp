//##################################################################
// File Name: 416.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月25日 星期三 20时51分40秒
//=============================================================
//!/usr/bin/python


//递归和记忆化搜索
class Solution {
	//memo[i][c] 表示使用索引为[0...i]的这些元素，是否可以完全填充一个容量为CDe beibao 
	//-1 表示未计算；０表示不可以填充，１表示可以填充
	vector<vector<int>> memo;

	//使用nums[0..index]，是否可以完全填充一个容量为sum的背包
	bool try_( vector<int> &nums,int index,int sum)
	{
		if( sum == 0 ) return true;

		if( sum < 0 || index < 0)  return false;

		if( memo[index][sum] != -1) return memo[index][sum];

		memo[index][sum] = try_( nums,index-1,sum) || try_( nums,index-1, sum-nums[index]);


		return memo[index][sum];
	}
public:
    bool canPartition(vector<int>& nums) {
	    int sum = 0;
	    for( int i  = 0 ; i < nums.size() ; i ++ )
	    {
		    sum += nums[i];
	    }

	    if( sum%2 != 0) return false;
                                            //初始化行  //初始化列
	    memo = vector<vector<int>> ( nums.size() , vector<int>( sum/2+1,-1));


	    return try_( nums, nums.size() - 1 , sum/2 );

    }
};



//动态规划
class Solution {
public:
    bool canPartition(vector<int>& nums) {
	    int sum = 0;

	    for( int i = 0 ; i < nums.size() ; i ++ )
	    {
		    sum += nums[i];
	    }

	    if( sum%2 ) return false;

	    int n = nums.size();
	    int C = sum/2;


	    vector<bool> memo( C+1 ,false);

	    for( int i = 0 ; i <= C ; i ++ ) memo[i] = ( nums[0] == i);


	    for( int i = 1 ; i < n ; i ++ )
	    {
		    for( int j = C ; j >= nums[i] ; j -- )
		    {
			    memo[j] = memo[j] || memo[ j-nums[i] ];
		    }
	    }



	    return memo[C];

	     

    }
};
