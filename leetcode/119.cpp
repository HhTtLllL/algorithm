//##################################################################
// File Name: 119.cpp
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年11月19日 星期二 20时14分01秒
//=============================================================
//!/usr/bin/python
class Solution {
public:
    vector<int> getRow(int rowIndex)
    {
            vector<int> v1;
            v1.push_back(1);
            vector<int> v2;
            v2.push_back(1);
            v2.push_back(1);
            v2[0] = 1;
            v2[1] = 1;

            vector<vector<int>> v;
            v.resize(40);
            for(int i = 0;i < 40;i++) v[i].resize(40);
            v[0][0] = 1;
            v[1][0] = 1;
            v[1][1] = 1;


            if(rowIndex == 0) return v1;
            else if(rowIndex == 1) return v2;

            for(int i = 2;i <= rowIndex+1 ;i++)
            {
                    v[i][0] = 1;
                    for(int j = 1;j < i - 1;j++)
                    {
                            v[i][j] = v[i-1][j-1] + v[i-1][j];
                    }
                    v[i][i - 1] = 1;
                    for(int j = 0;j < i;j++) cout << v[i][j] << " ";                                                                                            
                    cout << endl; 
            }

            while(!v[rowIndex+1].back())
            {
                v[rowIndex + 1].pop_back();
            }

            return v[rowIndex + 1];
    }
};

