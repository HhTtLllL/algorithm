//##################################################################
// File Name: 200.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月27日 星期五 20时47分58秒
//=============================================================
//!/usr/bin/python

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;


class Solution {
private:
	int numlands = 0;
	int n,m;
	vector<vector<bool>> vis;
	int dis[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

	bool inArea( int x,int y )
	{
		return x >= 0 && x < n && y >= 0 && y < m;
	}


	void findLands(vector<vector<char>>& grid,vector<vector<bool>>& vis,int startx,int starty)
	{
		grid[startx][starty] = '0';
		vis[startx][starty] = true;

		//向四个方向进行搜索
		for( int i = 0 ; i < 4 ; i ++ )
		{
			int newx = startx + dis[i][0];
			int newy = starty + dis[i][1];

			if( !vis[newx][newy] && ( grid[newx][newy] == '1') && inArea( newx, newy))
			{
				findLands(grid,vis,newx,newy);
			}

		}
	}
public:
    int numIslands(vector<vector<char>>& grid) {

	    n = grid.size();
	    assert(n > 0);
	    m = grid[0].size();

	    vis = vector<vector<bool>>(n,vector<bool>(m,false));

	    for( int i = 0 ; i < n ; i ++ )
	    {
		    for( int j = 0 ; j < m ; j ++ )
		    {
			    if(grid[i][j] == '1' && !vis[i][j]) //个人觉得这里没必要判断，因为这个双层for不会回溯
			    {
				    numlands++;
				    findLands(grid,vis,i,j);
			    }
		    }
	    }
	    return numlands;

    }
};

