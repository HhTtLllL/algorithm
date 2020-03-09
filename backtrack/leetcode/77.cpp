//##################################################################
// File Name: 77.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月09日 星期一 19时19分31秒
//=============================================================
//!/usr/bin/python
class Solution {
private:
	vector<vector<int>> res;

	//index 从index 开始搜索新的元素, record 为找到的组合的存储
	void find(int n,int index,int k,vector<int>& record)
	{
		if( record.size() == k ){
			res.push_back(record);
			return ;

		}
		//还有 k -record.size() 个空位需要填补
		//也就是说 [i..n] 中至少要有 k - record.size() 个元素
		for( int i = index ; i <= n  - ( k - record.size()) + 1; i ++ ){
			record.push_back(i);
			find(n,index + 1,k,record);
			record.pop_back();
		}
	}




public:
    vector<vector<int>> combine(int n, int k) 
    {
	    vector<int> record;

	    find(n,1,k,record);


	    return res;
    }
};
