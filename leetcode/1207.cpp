class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
	    set<int> s;
	    int a[2005];
	    auto it = arr.begin();
	    for(it;it != arr.end();it++)
	    {
		    if((*it) >= 0) a[*it]++;
		    else a[(*it * (-1)) + 1000]++;
	    }

	    for(int i = 0;i < 2005;i++)
	    {
		    if(a[i] == 0) continue;
		    else
		    {
			    if(s.find(a[i]) != s.end()) return false;
			    s.insert(a[i]);
		    }
	    }
		
	    return true;

        
    }
};
