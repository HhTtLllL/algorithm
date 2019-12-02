class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
	    vector<int> v;
	    set<int> s1;
	    set<int> s2;
	    set<int> s3;
	    for(auto &i : nums1)
	    {
		    s1.insert(i);
	    }
	    for(auto &i : nums2)
	    {
		    s2.insert(i);
	    }
	    for(auto &i : s1)
	    {
		    for(auto &j : s2)
		    {
			    if(i == j)
			    {
				    v.push_back(i);
				    break;
			    }
		    }
	    }
	    
	    return v;

        
    }
};
