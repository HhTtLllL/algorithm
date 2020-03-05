//##################################################################
// File Name: 350.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月05日 星期四 15时59分03秒
//=============================================================
//!/usr/bin/python
class Solution {
public:
	//unordered_map  
	//unordered_set 的底层实现为哈希表
	//时间复杂度:O(nlogn)
	//空间复杂度:O(n)
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

	    //遍历并插入 O(nlogn)
	    //
	    map<int,int> record;
	    for( int i = 0 ; i < nums1.size() ; i++ )
	    {
		    record[nums1[i]] ++;
	    }

	    vector<int> resultVector;

	    //O(nlogn) 查找并修改
	    for( int i = 0 ; i < nums2.size() ; i++ )
	    {
		    if(record[nums2[i]] > 0 )
		    {
			    resultVector.push_back( nums2[i] );
			    record[nums2[i]] --;
		    }
	    }

	    return resultVector;

    }
};


class Solution {
public:
	//unordered_map  
	//unordered_set 的底层实现为哈希表  哈希表 查找和 插入的时间复杂度为 o(n)
	//时间复杂度:O(n)
	//空间复杂度:O(n)
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

	    //遍历并插入 O(n)
	    unordered_map<int,int> record;
	    for( int i = 0 ; i < nums1.size() ; i++ )
	    {
		    record[nums1[i]] ++;
	    }

	    vector<int> resultVector;

	    //O(n)查找并修改
	    for( int i = 0 ; i < nums2.size() ; i++ )
	    {
		    if(record[nums2[i]] > 0 )
		    {
			    resultVector.push_back( nums2[i] );
			    record[nums2[i]] --;
		    }
	    }

	    return resultVector;

    }
};

