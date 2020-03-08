//##################################################################
// File Name: 279.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月08日 星期日 16时32分00秒
//=============================================================
//!/usr/bin/python
//广搜寻找最短路径　－－将每个结点都执行一次，谁先执行到0,谁就是最短的
class Solution {
public:
    int numSquares(int n) {
	    queue< pair<int,int> > q;
	    q.push( make_pair( n , 0) );

	    vector<bool> visited( n + 1,false);
	    //用来标记某一个数字是否已经进入过队列
	    //如果进入了,就不用再次入队

	    while(!q.empty())
	    {
		    int num = q.front().first;
		    int step = q.front().second;

		//    if( num == 0) return step;  //每个结点执行一次，谁先减到0, 谁就是最短路径
		    q.pop();
		    for( int i = 1 ;  ; i ++ )
		    {
                int a = num - i*i;
                if(a < 0) break;
    if(a == 0) return step + 1;
                if( !visited[a])
			    {
				    visited[a] = true;
				    q.push( make_pair( a,step + 1) );
			    }
		    }

	    }

	    return 0;
    }
};
