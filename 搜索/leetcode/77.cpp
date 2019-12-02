/*   搜组合数
 *   1 2 3 4 ... n
 *   
 *
 *
 *
 *   
 *
 *   */

class Solution {
public:
	vector<vector<int>> v;
	void dfs(vector<int>& path,int start,int n,int u)
	{
		if(!k)
		{
			v.push_back(path);
			return ;
		}

		for(int i = start;i <= n;i++)
		{
			path.push_back(i);
			dfs(path,i+1,n,k--);
			path.pop_back();  //恢复现场
		}
	}
        vector<vector<int>> combine(int n, int k) 
        {
		vector<int> path;
		dfs(path,1,n,k);

		return v;
	}
    }
};
