class Solution {
public:
    bool hasAlternatingBits(int n) 
    {
	    int flag  =0;
	    flag = n%2;
	    n /= 2;
	    while(n)
	    {
		    if(flag == (n%2))
		    {
			    return false;
		    }
		    flag = n%2;
		    n /= 2;
	    }
	    return true;
        
    }
};
