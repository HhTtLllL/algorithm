//##################################################################
// File Name: 349.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月05日 星期四 15时47分33秒
//=============================================================
//!/usr/bin/python
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
	    set<int> record;
	    for(int i = 0 ; i < nums1.size() ; i++ )
	    {
		    record.insert(nums1[i]);
	    }

	    set<int> resultSet;
	    for( int i = 0 ; i < nums2.size() ; i++ )
	    {
		    if(record.find(nums2[i]) != record.end() )
			    resultSet.insert( nums2[i] );
	    }

	    vector<int> resultVector;

	    for( set<int>::iterator iter = resultSet.begin() ;iter != resultSet.end() ; iter ++ )
		    resultVector.push_back( *iter );



    }
};

class Solution {
public:
	//时间复杂度: O(nlogn)
	//空间复杂度: O(n)
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            //遍历 并且插入, 遍历为 o(n), 插入为 log(n)
	    //复杂度为 O(nlogn)
	    set<int> record(nums1.begin() , nums1.end() );

	    //遍历一遍,然后 查找 或者 插入,都为O(logn), 时间复杂度为 O(nlogn)
            set<int> resultSet;
            for( int i = 0 ; i < nums2.size() ; i++ )
            {
                    if(record.find(nums2[i]) != record.end() )
                            resultSet.insert( nums2[i] );
            }

	    //set 内实现为 平衡二叉树 ,遍历一遍为 o(n),插入 vector 时间复杂度为 O(1), 
	    //时间复杂度为 O(n)
	    return vector<int>( resultSet.begin() , resultVector.end() );
    }
};

class Solution {
public:
        //时间复杂度: O(n)
        //空间复杂度: O(n)
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            //遍历 并且插入, 遍历为 o(n), 插入为 O(n)
            //复杂度为 O(n)
            unordered_set <int> record(nums1.begin() , nums1.end() );

            //遍历一遍,然后 查找 或者 插入,都为O(n), 时间复杂度为 O(n)
            unordered_set<int> resultSet;
            for( int i = 0 ; i < nums2.size() ; i++ )
            {
                    if(record.find(nums2[i]) != record.end() )
                            resultSet.insert( nums2[i] );
            }

            //set 内实现为 平衡二叉树 ,遍历一遍为 o(n),插入 vector 时间复杂度为 O(1),
            //时间复杂度为 O(n)
            return vector<int>( resultSet.begin() , resultVector.end() );
    }
};
