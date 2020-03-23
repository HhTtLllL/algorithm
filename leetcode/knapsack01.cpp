//##################################################################
// File Name: knapsack01.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月23日 星期一 21时16分07秒
//=============================================================
//!/usr/bin/python

#include <iostream>
#include <vector>

using namespace std;

//记忆化搜索
class Knapsack01{
	public:
		vector<vector<int>> memo; //用于记忆化搜索

		//用[0..index] 的物品,填充容积为c 的背包的最大价值
		int bestValue(const vector<int>&w,const vector<int> v,int index,int c)
		{
			if( index < 0 || c <= 0)
			{
				return 0;
			}

			if(memo[index][c] != -1) return memo[index][c];

			int res = bestValue( w,v,index-1,c);
			if( c >= w[index])
			{
				res = max(res,v[index] + bestValue(w,v,index-1,c - w[index]));
			}

			memo[index][c] = res;


			return res;
		}



		int knapsack01( const vector<int>& w,const vector<int> &v, int C)
		{
			int n = w.size();

			//初始化二维数组
			memo = vector<vector<int>> (n,vector<int>(C+1,-1));


			return bestValue(w ,v , n-1 ,C);
		}


}



int main()
{




	return 0;
}
