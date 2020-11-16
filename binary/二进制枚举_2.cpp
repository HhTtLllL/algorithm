///////////////////////////////////////////////////////////////
// File Name: 二进制枚举_2.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-11 16:05:13
// Description:
///////////////////////////////////////////////////////////////
/*题干:
 * 某君有n个互不相同的正整数，现在他要从这n个正整数之中无重复地选区任意个数，并仅通过加法凑出整数X，求某君有多少种不同的方案来凑出整数X
 */
#include <iostream>

using namespace std;

int main() {

    int n, x, ans = 0, a[30];
    cin >> n >> x;
    for(int i = 0; i < n; i ++) {

        cin >> a[i];
    }

    for(int i = 0; i < (1 << n); i ++) {                //枚举 2^n 次方

        int num = 0;
        /*n 次循环，代表我们要查看n个整数，
         *
         * if(i & (1 << j)) 代表我们是否选择了第j个整数， 如果选择了，就把对应的整数加到 num 中
         */
        for(int j = 0; j < n; j ++) {

            if(i & (1 << j)) {                          //n 进制的集合，代表选或者不选

                num += a[j];
            }
        }

        if(num == x) ans++;
    }

    cout << ans << endl;

    return 0;
}
