///////////////////////////////////////////////////////////////
// File Name: 11.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-10-09 22:15:28
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:
    int minArray(vector<int>& numbers) {

          int size = numbers.size();
          assert(size > 0);
          int res = numbers[0];

          for(int i = 0; i < size - 1; i ++ ){

              if(numbers[i] > numbers[i + 1]) {

                  res = numbers[i + 1];
                  break;
              }
          }

          return res;

    }
};
