//##################################################################
// File Name: 198.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月22日 星期日 20时20分45秒
//=============================================================
//!/usr/bin/python
//递归
class Solution {
private:
	//考虑抢劫 nums[index...num.size()] 这个范围的所有房子
	int tryrob( vector<int> & nums,int index){
		if(index >= nums.size() ) return 0;

		int res = 0;

		for( int i = index ; i < nums.size() ; i ++)
		{
			res = max( res , nums[i] + tryrob(nums, i + 2) );
		}

		return res;
	}
public:
    int rob(vector<int>& nums) {
	 
	    return tryrob( nums,0);   
    }
};
//记忆化搜索
class Solution {
private:
	//memo[i] 表示考虑抢劫 nums[i ... n ] 所能获得的最大收益
	vector<int> memo;
	
	int tryrob( vector<int> & nums,int index){
		if(index >= nums.size() ) return 0;

		if(memo[index] != -1) return memo[index];

		int res = 0;

		for( int i = index ; i < nums.size() ; i ++)
		{
			res = max( res , nums[i] + tryrob(nums, i + 2) );
		}
		memo[index] = res;

		return res;
	}

public:
    int rob(vector<int>& nums) {

	    return tryrob( nums , 0);

    }
};



//动态规划 --记忆化搜索的反向 自底向上 
class Solution {
public:
    int rob(vector<int>& nums) {

	    int n = nums.size();

	    if( n == 0 ) return 0;

	    vector<int> memo(n,-1);
	    
	    //先解决最基础的子问题，这里的基础子问题　为 memo[n-1]
	    memo[n-1] = nums[n-1]; //当只有一个房子时，选择它

	    for( int i = n-2 ; i >= 0 ; i -- )
	    {
		    //每一次都在求解　memo[i] 
		    for( int j = i ; j < n ; j ++ )
		    {
			    memo[i] = max( memo[i] , nums[j] + ( j+2 < n ?  memo[j+2] : 0));
		    }
	    }

	    return memo[0];
    }
};

