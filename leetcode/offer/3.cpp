///////////////////////////////////////////////////////////////
// File Name: 3.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-09-29 13:40:41
// Description:
///////////////////////////////////////////////////////////////

// set
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
                
                set<int> s;
                for(int i = 0; i < nums.size(); i ++ ){
                                if (s.count(nums[i]) == 1) return nums[i];
                                            else s.insert(nums[i]);
                                                    
                }
                        return 0;
                            
    }
    
};

//数组
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {

                int a[100000 + 5] = {0};
                        int size = nums.size();

                        for(int i = 0; i < size; i ++ ) {
                                        
                                        if(!a[nums[i]]) a[nums[i]]++;
                                                    else return nums[i];
                                                            
                        }

                                return -1;
                                    
    }
    
};
