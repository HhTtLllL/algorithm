///////////////////////////////////////////////////////////////
// File Name: bfs.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-10-16 14:18:39
// Description:
///////////////////////////////////////////////////////////////

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int a[50][50];
int book[50][50];
int next[4][2] = {{0,1}, {1,0}, {-1, 0}, {0, -1}}; 
queue<int> q;
int main()
{

    for(int i = 0; i < 5; i ++ ) {

        for(int j = 0; j < 5; j ++ ) {
            
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < 5; i ++ ) {
        for(int j = 0; j < 5; j ++ ) {

            

            
        }
    }



    return 0;
}
