///////////////////////////////////////////////////////////////
// File Name: 1143.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-12-03 21:14:41
// Description:
///////////////////////////////////////////////////////////////
class Solution {

int dp[1000 + 5][1000 + 5] = {0};

public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int len1 = text1.size();
        int len2 = text2.size();

        for(int i = 1; i <= len1; i ++) {

            for(int j = 1; j <= len2; j ++) {

                if(text1[i - 1] != text2[j - 1]) {

                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }else{

                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
            }
        }

        return dp[len1][len2];
    }
};
