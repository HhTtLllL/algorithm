//##################################################################
// File Name: 322.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月25日 星期三 21时52分02秒
//=============================================================
//!/usr/bin/python
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {

        int MAX = amount + 1;
        vector<int> dp(amount + 1, MAX);

        dp[0] = 0;
        for(int i = 1;i <= amount; i ++ ) {                 //剩余总量（可以理解为背包总量）

            for(int j = 0; j < coins.size(); j ++ ) {       //有coins.size 和物品，每个物品的价值为 coins[i]

                if(coins[j] <= i) {

                    dp[i] = min(dp[i], dp[i - coins[j]] + 1);
                }
            }
        }

        return dp[amount] > amount ? -1 : dp[amount];
    }
};
