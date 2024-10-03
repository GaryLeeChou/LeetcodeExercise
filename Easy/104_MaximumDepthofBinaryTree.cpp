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
    int collectNum(TreeNode * target , int num){
        num++;
        cout<<target->val<<endl;
        cout<<num<<endl;
        int right_num = num;
        int left_num = num;
        if(target -> right != NULL){
            right_num = collectNum( target->right , num );
            // cout<<target->val<<endl;
        }
        if(target -> left != NULL){
            left_num = collectNum( target->left , num );
        }

        num = (right_num > left_num) ? right_num : left_num;
        return num;
    }
    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;
        int ret = collectNum(root , 0) ; 
        return ret;
    }
};