///////////////////////////////////////////////////////////////
// File Name: dijkstra_2.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-09 20:16:01
// Description:
///////////////////////////////////////////////////////////////

/* 只适用于 非负权图  */
#include <iostream>
#include <cstring>

using namespace std;

const int N = 1001;
const int M = 10001;

struct edge {

    int v, w, next;
    edge(){}
    edge(int _v, int _w,    int _next) {

        v = _v;
        w = _w;
        next =  _next;
    }
}e[M * 2];                                      //e 存储的是每一条边

int head[N], size1;                             //size1 为第几条边

void init() {
    
    memset(head, -1, sizeof(head));
    size1 = 0;
}

void insert(int u, int v, int w) {

    e[size1]  = edge(v, w, head[u]);
    head[u] = size1++;
}

void insert2(int u, int v, int w) {

    insert(u, v, w);
    insert(v, u, w);
}

int n, m;

int dis[N];                             //从源点到第N个点的距离为 dis[N]
bool vis[N];

void dijkstra(int u) {

    memset(vis, false, sizeof(vis));
    memset(dis, 0x3f, sizeof(dis));

    dis[u] = 0;                         //初始化源点
    for(int i = 0; i < n; i ++ ) {

        int mind = 1000000000, minj = -1;
        for(int j = 1 ; j <= n; j ++ ) {

            if(!vis[j] && dis[j] < mind) {

                minj = j;
                mind = dis[j];
            }
        }
        if(minj == -1) return ;

        vis[minj] = true; 
        for(int j = head[minj]; ~j; j = e[j].next) {                //~j 等价与 j != -1 
            
            int v = e[j].v;
            int w = e[j].w;
            if(!vis[v] && dis[v] > dis[minj] + w) {

                dis[v] = dis[minj] + w;
            }
        }
    }
}


/*从 1  到n 的最短路径*/
int main() {

    init();
    int u, v, w;

    cin >> n >> m;                          //n个点， m条边
    while(m--) {

        cin >> u >> v >> w;
        insert2(u, v, w);
    }

    dijkstra(1);                            //起始点

    cout << dis[n] << endl;

    return 0;
}
