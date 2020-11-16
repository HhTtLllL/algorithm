///////////////////////////////////////////////////////////////
// File Name: p4779.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-09 22:39:03
// Description:
///////////////////////////////////////////////////////////////

#include <iostream>
#include <cstring>

using namespace std;

const int N = 1e5 + 10;
const int M = 2e5 + 10;

struct edge {

    int v, w, next;
    edge() {}
    edge(int _v, int _w, int _next) {
        
        v = _v;
        w = _w;
        next = _next;
    }
}e[M * 2];

int head[N], size;

void init() {

    memset(head, -1, sizeof(head));
    size = 0;
}

void insert(int u, int v, int w) {

    e[size] = edge(v, w, head[u]);
    head[u] = size++;
}

void insert2(int u, int v, int w) {

    insert(u, v, w);
    insert(v, u, w);
}

int n, m, s;
int dis[N];
int vis[N];

void dijkstra(int u) {

    memset(vis, false, sizeof(vis));
    memset(dis, 0x3f, sizeof(dis));

    dis[u] = 0;     
    for(int i = 0; i < n; i ++ ) {

        int mind = 1000000000, minj = -1;
        for(int j = 1; j <= n; j ++ ) {

            if(!vis[j] && dis[j] < mind) {

                minj = j;
                mind = dis[j];
            }
        }
        if(minj == -1) return ;

        vis[minj] = true;
        for(int j = head[minj]; ~j; j = e[j].next) {

            int v = e[j].v;
            int w = e[j].w;
            if(!vis[v] && dis[v] > dis[minj] + w) {

                dis[v] = dis[minj] + w;
            }
        }
    }
}


int main() {

    init();
    cin >> n >> m >> s;

    int u, v, w;
    while(m--) {

        cin >> u >> v >> w;
        insert(u, v, w);
    }

    dijkstra(s);


    for(int i = 1; i <= n; i++) {
    
        cout << dis[i] << " ";
    }
    cout << endl;
}
