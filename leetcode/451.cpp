class Solution {
public:
	bool cmp(vector<int>& a,vector<int>& b)
	{
		return a[1] > b[1];
	}
    string frequencySort(string s) 
    {
	string ans1;
	char temp;
	vector<vector<int>> ans(200,vector<int>(5,0));
	for(auto it = s.begin();it != s.end();it++)
	{
		ans[*it][0] = *it;
		ans[*it][1]++;
	}

	sort(ans.begin(),ans.end(),cmp);
        auto it = ans.begin();
	while(1)
	{
		if((*it)[1] == 0) break;
		else
		{
			for(int i = 0;i < (*it)[1];i++)
			{
				temp = (*it)[0];
				ans1.push_back(temp);
			}
		}
	}
	return ans1;
    }


};
