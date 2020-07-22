//##################################################################
// File Name: 374.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年07月22日 星期三 19时29分16秒
//=============================================================
//!/usr/bin/python

class Solution {
public:
    int guessNumber(int n) {
	    int res = 1;
	    int l = 1,r = n;
		while( l <= r )
		{
			//int mid = (l + r)/2;
			int mid = l + (r - l)/2; //避免( r + l )超出范围
			if( guess((mid)) == 1)
			{
				l = mid + 1;
			}
			else if( guess((mid)) == -1)
			{
				r = mid - 1;
			}
			else 
			{
				res = mid;
				break;
			}
		}

		cout << res;



    }
};
