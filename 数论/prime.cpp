///////////////////////////////////////////////////////////////
// File Name: prime.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-12 14:52:30
// Description:
///////////////////////////////////////////////////////////////
/*
 * 判断从 2 ~ n 中间有多少个数是质数
 *
 * 先假设所有数都是质数，然后在将
 * */

#include <iostream>

using namespace std;

bool is_prime[1000 + 10];

int main() {

    int n;
    cin >> n;

    for(int i = 2; i <= n; i ++) {

        is_prime[i] = true;
    }

    for(int i = 2; i <= n; i ++) {

        if(is_prime[i]) {

            for(int j = i*i; j <= n; j += i) {

                is_prime[j] = false;
            }
        }
    }

    return 0;
}
