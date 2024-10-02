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
    vector<int> Putval (TreeNode* locat , vector<int> ret ){
        ret.push_back(locat->val);
        return ret;
    }
    vector<int> inorderTraversal_(TreeNode* root , vector<int> ret) {
        //left
        if ( root->left != NULL ){
            ret = inorderTraversal_(root->left , ret);
        }
        //mid
        ret = Putval(root , ret );
        //right
        if ( root->right != NULL ){
            ret = inorderTraversal_(root->right , ret);
        }
        return ret; 
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret = {};
        ret.reserve(100);
        if (root == NULL) return ret;
        ret = inorderTraversal_(root,ret);
        return ret; 
    }
};