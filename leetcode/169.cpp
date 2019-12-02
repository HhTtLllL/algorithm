class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {   
            int size = nums.size();
            if(size == 1) return nums[0];
            int temp = 0;
            sort(nums.begin(),nums.end());
            int sum = 1;
            for(int i = 0;i < size - 1;i++)
            {
                    if(nums[i] == nums[i + 1] )
                    {
                            sum++;
                    }
                    else
                    {
                            sum = 1;
                    }
                    if(sum > size/2)
                    {
                            temp = nums[i];
                    }

            }

            return temp;                                                                                                                                 
    
    
    }   
};
