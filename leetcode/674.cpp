class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) 
    {
	    if(nums.size() == 1) return 1;


	    int cnt = 1;
	    int max1 = 0;
	    for(int i = 1;i < nums.size();i++)
	    {
		    if(a[i] > a[i-1]) 
		    {
			    cnt++;
			    max1 = max(max1,cnt)
		    }
		    else cnt = 1;
	    }
	    return max1;
        
    }
};
