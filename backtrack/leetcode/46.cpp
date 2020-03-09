//##################################################################
// File Name: 46.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月09日 星期一 18时43分53秒
//=============================================================
//!/usr/bin/python
class Solution {
	private:
		vector<vector<int>> res;
		vector<bool> used;

		void find(const vector<int> nums,int index,vector<int> recode)
		{
			if( index == nums.size() )
			{
				res.push_back(recode);
				return ;
			}
			for( int i = index ; i < nums.size() ; i ++ )
			{
				//判断nums[i] 是否在 p 中
				if(!nums[i])
				{
					recode.push_back(nums[i]);
					used[i] = true;
					find(nums,index + 1,recode);
					used[i] = false;
					recode.pop_back();
				}
			}

			return ;
		}
	
	public:
		vector<vector<int>> permute(vector<int>& nums) {
			vector<int> recode;

			used = vector<bool>( nums.size(),false);
			find(nums,0,recode);


			return res;
		}
};
