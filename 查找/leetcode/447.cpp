//##################################################################
// File Name: 447.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月05日 星期四 19时26分39秒
//=============================================================
//!/usr/bin/python
//时间复杂度: O(n^2)
//空间复杂度: O(n)
class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
	    int res = 0;
	    for( int i = 0 ; i < points.size() ; i ++ )
	    {
		    unordered_map<int,int> record;

		    for( int j = 0 ; j < points.size() ; j ++ )
		    {
			    if( j != i)
				    record[ dis(points[i],points[j])] ++ ;
		    }

		    for( unordered_map::itertor iter = record.begin() ; iter != record.end() ; iter ++ )
		    {
			    if( iter->second >= 2) res += (iter->second) * (iter->second - 1);
		    }

	    }


    }
private:
    int dis( vector<int>& pa,vector<int>& pb)
    {
	    //在这里要确定一下,是否会越界  
	    return ((pa[0] - pb[0]) * (pa[0] - pb[0]) + ((pa[1] - pb[1])* (pa[1] - pb[1] )));
    }
};
