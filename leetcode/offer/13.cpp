///////////////////////////////////////////////////////////////
// File Name: 13.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-10-20 20:56:00
// Description:
///////////////////////////////////////////////////////////////
class Solution {

private:
    //也可以使用 pair
    struct point {

        int x;
        int y;
    };
    int next1[4][2]  = {{1,0}, {-1,0}, {0,1}, {0, -1}};

    queue<point> q;


    int count(int i, int j) {
        int res = 0;
        while(i) {
            res += i%10;
            i /= 10;
        }

        while(j) {

            res += j%10;
            j /= 10;
        }

        return res;
    }

    int bfs(int m, int n, int k,vector<vector<int>>& book) {

        int sum = 0;

        while(!q.empty()) {
            struct point tmp = q.front();
            q.pop();

            for(int i = 0; i < 4; i ++ ) {

                int tx = tmp.x + next1[i][0];
                int ty = tmp.y + next1[i][1];

                if(tx < 0 || tx >= m || ty < 0 || ty >= n) continue;
                if(book[tx][ty] == 1) continue;
                if(count(tx, ty) > k) continue;
                struct point tmp1;
                tmp1.x = tx;
                tmp1.y = ty;
                q.push(tmp1);
                sum++;
                book[tx][ty] = 1;
            }
        }

        return sum;
    }



public:
    int movingCount(int m, int n, int k) {

        struct point tmp = {0,0};

        q.push(tmp);
        vector<vector<int>> book(m,vector<int>(n));

        book[0][0] = 1;
        return bfs(m, n, k, book) + 1;
    }
};
