///////////////////////////////////////////////////////////////
// File Name: 57.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-10 22:16:01
// Description:
///////////////////////////////////////////////////////////////
/* 超时*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int size = nums.size();

        for(int i = 0; i < size; i ++ ) {

            int tmp = target - nums[i];
            for(int j = i + 1 ;j < size; j ++) {
                    
                if(tmp == nums[j]) {

                    return vector<int>{nums[i], nums[j]};
                }
            }
        }

        return vector<int>{0,0};
    }
};



/*双指针法*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int size = nums.size();
        int left = 0, rigth = size - 1; 

        while(left != rigth){

            if((nums[rigth] + nums[left]) > target) {

                rigth--;
            }else if((nums[rigth] + nums[left]) < target) {

                left++;
            }else if((nums[left] + nums[rigth]) == target) {

                return vector<int> {nums[left], nums[rigth]};
            }
        }
        
        return vector<int>{0,0};
    }
};

