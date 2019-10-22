class Solution
{
	public:
		vector<vector<string>> groupAnagrams(vector<string>& strs)
		{
			unordered_map<string,vector<string>> hash;
			for(auto s : strs)
			{
				string rs = s;
				sort(s.begin(),s.end());
				hash[s].push_back(rs);
			}
	
			vector<vector<string>> res;
			for(auto & group : hash)
			{
				res.push_back(group.second);
			}
			return res;
		}
}
