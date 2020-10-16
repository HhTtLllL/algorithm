///////////////////////////////////////////////////////////////
// File Name: p1451.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-10-16 22:44:54
// Description:
///////////////////////////////////////////////////////////////

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

char a[105][105];
int book[105][105];

int next1[4][2] = {{1,0}, {-1, 0}, {0, 1}, {0, -1}};

struct point {

    int x;
    int y;
};


int n,m;

queue<point> q;
void print()
{

    for(int i = 0; i < n; i ++ ){
        for(int j = 0; j < m; j ++)
            cout << book[i][j];

        cout << endl;
    }

}

void bfs() {
    
    int nx,ny;


    while(!q.empty()) {

        struct point tmp = q.front();
        q.pop();


        for(int i = 0; i < 4; i ++ ) {
            
            nx = tmp.x + next1[i][0];
            ny = tmp.y + next1[i][1];

            //检查是否越界
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

            if( book[nx][ny] == 0) {

                book[nx][ny] = 1;

                struct point tmp2;
                tmp2.x = nx;
                tmp2.y = ny;

                q.push(tmp2);
            }

        }
    }
}

int sum;

int main() 
{
    
    cin >> n >> m;

    for(int i = 0; i < n; i ++ ) {
        for(int j = 0; j < m; j ++ ) {

            cin >> a[i][j];
            if(a[i][j] == '0') book[i][j] = 1;
        }
    }
    
    for(int i = 0; i < n; i ++ ){
        for(int j = 0; j < m; j ++ ) {
            
            if( book[i][j] == 0 ){
                
                sum ++;
                book[i][j] = 1;

                struct point start;
                start.x = i;
                start.y = j;

                q.push(start);
                bfs();

            }
        }
    }
    cout << sum;

    return 0;
}
