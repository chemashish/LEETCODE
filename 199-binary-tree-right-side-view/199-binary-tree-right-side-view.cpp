/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxlevel=0;
    vector<int>v;
    vector<int> printRightView(TreeNode* root,int level)
    {
        if(root==NULL)
            return v;
        if(maxlevel<level)
        {
            v.push_back(root->val);
            maxlevel=level;
        }
        printRightView(root->right,level+1);
        printRightView(root->left,level+1);
        return v;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v1;
        v1=printRightView(root,1);
        return v1;
    }
};