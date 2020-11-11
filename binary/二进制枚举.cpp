///////////////////////////////////////////////////////////////
// File Name: 二进制枚举.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-11 15:46:55
// Description:
///////////////////////////////////////////////////////////////
 /*
  * 题干: 李白从家出发，酒壶里有两斗酒， 逢店加一倍，遇花喝一斗。
  * 一路上，他们一共遇到店5次， 遇到花10次，已知最后一次遇到的是花，正好把酒喝光。
  * 请你计算李白遇到花店和花的次序，可能有多少中方案？
  */

#include <iostream>

using namespace std;

int main() {

    int ans = 0;
    for(int i = 0; i < (1 << 14); i++) {

        int tot_1 = 0;
        int tot_0 = 0;
        int num = 2;

        for(int j = 0; j < 14; j ++) {

            if(i & (1 << j)) {

                tot_1++;
                num = num * 2;
            }else {

                tot_0++;
                num = num - 1;
            }
        }
        if(tot_1 == 5 && tot_0 == 9 && num == 1) {

            ++ans;                                  //记录合法方案数
        }
    }

    return 0;
}


