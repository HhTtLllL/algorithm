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
int next1[4][2] = {{0,1}, {1,0}, {-1, 0}, {0, -1}}; 

struct point {
    int x;
    int y;
};

queue<point> q;
int nx,ny;

void bfs(){

    while(!q.empty()) {
        
        struct point tmp = q.front();
        q.pop();
        for(int i = 0; i < 4; i ++ ){ 
            
            nx = tmp.x + next1[i][0];
            ny = tmp.y + next1[i][i];

            //判断是否越界
            if(nx < 0 || nx > 5 || ny < 0 || ny > 5) continue;

            //判断是否是空地，或者是否走过， 1 为墙
            if(a[nx][ny] == 0 || book[nx][ny] == 0) {

                book[nx][ny] = 1;
                //加入队列
                tmp.x = nx;
                tmp.y = ny;
                q.push(tmp);
            }
        }       
    }
}

int main()
{

    for(int i = 0; i < 5; i ++ ) {

        for(int j = 0; j < 5; j ++ ) {
            
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < 5; i ++ ) {
        for(int j = 0; j < 5; j ++ ) {
            
            struct point start;
            start.x = i;
            start.y = j;

            q.push(start);
            book[i][j] = 1;
            bfs();
        }
    }



    return 0;
}
