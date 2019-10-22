class Solution {
public:
    string countAndSay(int n) 
    {
	    string s = "1";
	    for(int i = 1;i < n;i++)
	    {
		    string temp = "";
		    for(int j = 0;j < s.size();)
		    {
			    int u = j;
			    while(u < s.size() && s[u] == s[u+1]) u++;
			    temp += to_string(u - j);
			    temp += s[j];
			    j = u;
		    }
		    s = temp;
	    }
	    return s;
    }
};
