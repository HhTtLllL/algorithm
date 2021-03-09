///////////////////////////////////////////////////////////////
// File Name: 33.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2021-03-09 20:58:55
// Description:
///////////////////////////////////////////////////////////////
#include <vector> 

using namespace std;

class Solution {

private:
    bool judge(vector<int>& postorder, int start, int end) {

        //单个结，必然是二叉树
        if(start >= end) return true;

        //找左子树的结束位置
        int p = start;
        int rootval = postorder[end];           //备份根节点
        while(postorder[p] < rootval)   p++;    //找出第一个大于根节点的就是右子树的根节点

        int leftEnd = p - 1;                    //设置左子树结束位置
        //找右子树的结束位置
        while(postorder[p] > rootval) {
        
            //在左子树的区间中，都应该 大于根节点， 所以如果大于rootval(根节点)的值，一直往过找，最后判断是否找到根节点
            p++;
        }

        return p == end &&  judge(postorder, start, leftEnd) && judge(postorder, leftEnd + 1, end);
    }
public:
    bool verifyPostorder(vector<int>& postorder) {

        return judge(postorder, 0, postorder.size() - 1);
    }
};
