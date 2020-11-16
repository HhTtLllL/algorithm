class Solution {
public:
    vector<string> v;

    void dfs(string s,int u)
    {
	    if(u == s.size())
	    {
		    v.push_back(s);
		    return ;
	    }
	    dfs(s,u+1);   //将不变的进行搜索
	    if(s[u] >= 'A')
	    {
		    s[u] ^= 32; //将大写字母改为小写字母，将小写字母改变为大写字母
		    dfs(s,u+1);
	    }
    }
    vector<string> letterCasePermutation(string S) 
    {
	    dfs(S,0);

	    return v;
    }
};
