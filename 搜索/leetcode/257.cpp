/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	vector<string> ans;
	void dfs(string s,TreeNode* root)
	{
		if(!root) return ;
		if(path.size()) path += "->";
		path += to_string(root->val);

		if(!root->left && !root->right) ans.push_back(path);
		else
		{
			dfs(path,root->left);
			dfs(path,root->right);
		}
	}

	vector<string> binaryTreePaths(TreeNode* root) 
	{
		string s;
//		s += to_string(root->val);
		dfs(s,root);
        }
};
