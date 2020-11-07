///////////////////////////////////////////////////////////////
// File Name: 62.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-07 21:51:55
// Description:
///////////////////////////////////////////////////////////////

// 超时 : 26/36     最后的输入: 70866, 116922
class Solution {
public:
    int lastRemaining(int n, int m) {

        int MAX = n;
        int index = -1;
        vector<int> store(n);
        int res = -100;

        for(int i = 0; i < n; i++ ) {

            store[i] = i;
        }

        while(n != 1) {

            int time = m;
            while(time) {

                time--;
                index++;
                index = index % MAX;

                while(store[index] == -1) {

                      index++;
                      index = index % MAX;
                }
            }
            store[index] = -1;
            n--;
        }

        int size = store.size();
        for(int i = 0 ; i < size; i ++) {
            if(store[i] != -1) {

                res = store[i];
                break;
            }
        }

        return res;
    }
};
