///////////////////////////////////////////////////////////////
// File Name: 63.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-12-16 23:20:34
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:

    //dp[i]--第i天可能获得的最大利润
    int maxProfit(vector<int>& prices) {

        if(prices.size() == 0) return 0;

        //用来保存最低价格
        int minPrice = prices[0];
        //用来保存利润
        int cost = 0;

        for(int i : prices) {

            minPrice = min(minPrice, i);
            cost = max(cost, i - minPrice);
        }

        return cost;
    }
};
