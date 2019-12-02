class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
	    vector<vector<int>> ans;
	    for(int i = 0;i < numRows;i++) ans.push_back({1});
	    if(numRows <= 1) return ans;
	    else if(numRows == 2)    
	    {
		    ans[1].push_back(1);
		    return ans;
	    }
	    ans[1].push_back(1);

	    for(int i = 2;i < numRows;i++)
	    {
		    for(int j = 1;j <= (i - 1);j++)
		    {
			    ans[i].push_back(ans[i-1][j] + ans[i - 1][j-1]);
		    }
		    ans[i].push_back(1);
	    }



	   return ans;
        
    }
};
