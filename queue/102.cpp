//##################################################################
// File Name: 102.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月08日 星期日 16时07分13秒
//=============================================================
//!/usr/bin/python

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
    vector<vector<int>> levelOrder(TreeNode* root) {

	    vector< <vector<int> > res;
	    if( res == NULL) return res;

	    queue< pair<TreeNode*,int> > q;
	    q.push( make_pair( root,0) );

	    while( !q.empty() )
	    {
		    TreeNode* temp = q.front().first();
		    int level = q.front().second();

		    q.pop();

		    if( res.size() == level )
			    res.push_back( vector<int> );
		   res[level].push_back( temp->val );

		   if( temp->left)
			   q.push(make_pair( temp->left, level + 1));
		   if( temp->right)
			   q.push( make_pair( temp->right,level + 1));

	    }

	    return res;

    }
};
