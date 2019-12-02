class Solution {
public:
    bool isPalindrome(int x) 
    {
	    bool ans;
	    if(x < 0) return false;
	    else
	    {
		    string s = to_string(x);
		    int head = 0,tail = s.size() - 1;
		    while(head != tail && head <= tail)
		    {
			    if(s[head] == s[tail])
			    {
				    head++;
				    tail--;
			    }
			    else break;
		    }
		    if(s[head] == s[tail])	    ans = true;
		    else ans = false;
	    }
	    return ans;
        
    }
};
