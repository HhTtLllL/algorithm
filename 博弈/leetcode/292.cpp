class Solution {
public:
    bool canWinNim(int n) 
    {
	    int mod = n%4;
	    if(mod == 0) return false;
	    else return true;
        
    }
};
