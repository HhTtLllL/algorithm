class Solution {
public:
    vector<int> shortestToChar(string S, char C) 
    {
	    vector<int> ans;
	    vector<int> temp;
	    for(int i = 0;i < S.size();i++) if(S[i] == C) temp.push_back(i);

	    sort(temp.begin(),temp.end());
	    for(int i = 0;i < S.size();i++)
	    {
		    int temp1 = 99999999;
		    for(int j = 0;j < temp.size();j++)    temp1 = min(temp1,abs(temp[j] - i));

		    ans.push_back(temp1);
	    }
	    return ans;
        
    }
};
