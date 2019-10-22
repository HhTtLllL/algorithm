class Solution {
public:
    string toLowerCase(string str) 
    {
	    for(int i = 0;i < str.size();i++)
	    {
		    if(a[i] <= 90 && a[i] >= 65)
		    {
			    a[i] += 32;
		    }
	    }
	    return str;
        
        
    }
};
