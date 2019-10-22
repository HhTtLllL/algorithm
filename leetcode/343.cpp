class Solution {
public:
    int integerBreak(int n) 
    {
	    int sum = 1;
	    if(n <= 3)
	    {
		    return n;
	    }
	    while(1)
	    {
		    if(n > 4)
		    {
			    sum *= 3;
			    n -= 3;
		    }
		    else
		    {
			    sum *= n;
			    break;
		    }
	    }
	    return sum;
        
    }
};
