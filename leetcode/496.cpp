class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
	    vector<int> ans;
	    for(int i = 0;i < nums1.size();i++)
	    {
		    for(int j = 0;j < nums2.szie();j++)
		    {
			    if(nums1[i] == nums2[j])
			    {
				    int flag = 0;
				    for(int k = j;k < nums2.size();k++)
				    {
					    if(nums2[k] > nums1[i])
					    {
						    flag = k;
						    break;
					    }
				    }
				    if(flag != 0)
				    {
					    ans.push_back(nums2[k]);
				    }
			    }
		    }
	    }
	    return ans;
        
    }
};
