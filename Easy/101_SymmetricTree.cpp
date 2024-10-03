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
    bool Checksame (TreeNode* p , TreeNode* q ){
        if ( p->val == q->val )return true;
        return false;
    }
    bool inorderTraversal_(TreeNode* p , TreeNode* q ) {
        bool ret = true;
        //left
        if ( p->left != NULL && q->right != NULL){
            ret = (inorderTraversal_(p->left , q->right)&&ret);
        }else if(p->left == NULL && q->right == NULL){
            ret = ret;
        }else return false;
        //mid
        ret = (Checksame( p , q )&&ret);
        //right
        if ( p->right != NULL && q->left != NULL){
            ret = (inorderTraversal_(p->right , q->left)&&ret);
        }else if(p->right == NULL && q->left == NULL){
            ret = ret;
        }else return false;
        return ret; 
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q != NULL) return false;
        if (p != NULL && q == NULL) return false;
        if (p == NULL && q == NULL) return true;
        return inorderTraversal_(p,q);
    }
    bool isSymmetric(TreeNode* root) {
        bool ret = isSameTree( root->left , root->right );
        return ret;
    }
};