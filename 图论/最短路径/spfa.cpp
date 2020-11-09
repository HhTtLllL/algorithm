///////////////////////////////////////////////////////////////
// File Name: spfa.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-09 21:23:49
// Description:
///////////////////////////////////////////////////////////////
/*spfa == shortest path faster alge 
 *
 * 可适用于 负权， 稀疏图, 但是不能帯负环
 * */
#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

const int N = 1e3 + 9;
const int M = 1e4 + 9;
const int inf = 0x3f3f3f3f;

struct edge {

    int v, w, fail;
    edge() {}
    edge(int _v, int _w, int _fail) {

        v = _v;
        w = _w;
        fail = _fail;
    }
}e[M << 1];

int head[N], len;

void init() {

    memset(head, -1, sizeof(head));
    len = 0;
}

void add(int u, int v, int w) {

    e[len] = edge(v, w, head[u]);
    head[u] = len++;
}

void add2(int u, int v, int w) {

    add(u, v, w);
    add(v, u, w);
}

int n, m;
int dis[N];
bool vis[N];

void spfa(int u) {

    memset(vis, false, sizeof(vis));
    vis[u] = true;
    memset(dis, 0x3f, sizeof(dis));
    dis[u] = 0;

    queue<int> q;
    q.push(u);

    while(!q.empty()) {
    
        u = q.front();
        q.pop();

        vis[u] = false;
        for(int j = head[u]; ~j; j = e[j].fail) {

            int v = e[j].v;
            int w = e[j].w;
            if(dis[v] > dis[u] + w) {

                dis[v] = dis[u] + w;
                if(!vis[v]) {

                    q.push(v);
                    vis[v] = true;
                }
            }
        }
    }
}


int main() {

    init();

    int u, v, w;

    cin >> n >> m;
    while(m--) {

        cin >> u >> v >> w;
        add2(u, v, w);
    }
    
    spfa(1);

    cout << dis[n] << endl;

    return 0;
}
