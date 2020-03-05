//##################################################################
// File Name: 454.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月05日 星期四 18时45分38秒
//=============================================================
//!/usr/bin/python
//
//时间复杂度: O(n)
//空间复杂度: O(n)
class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
	    unordered_map<int,int> record;
	    for( int i = 0 ; i < C.size() ; i ++ )
	    {
		    for( int j  = 0 ; j < D.size() ; j ++ )
		    {
			    record[ C[i] + D[j] ]++;
		    }
	    }
	    int result = 0;

	    for( int i = 0 ; i < A.size() ; i ++ )
	    {
		    for( int j = 0 ; j < B.size() ; j ++)
		    {
			    int tmp =0 - ( A[i] + B[j] );
			    if(record.find(tmp) != record.end() )
			    {
				    result += record[tmp];
			    }
		    }
	    }

	    return result;
    }   
};
