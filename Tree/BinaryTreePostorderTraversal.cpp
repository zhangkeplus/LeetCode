/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> r;
    vector<int> postorderTraversal(TreeNode *root) {
        if(!root){
            return r;
        }
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        r.push_back(root->val);
        return r;
    }
};



class Solution {
public:
    vector<int> r;
    stack<TreeNode *> S;
    vector<int> postorderTraversal(TreeNode *root) {
        if(!root){
            return r;
        }
        while(!S.empty()){
            S.pop();
        }
        
        S.push(root);
        while(!S.empty()){
            TreeNode *temp = S.top();
            if(!temp->right && !temp->left){
                r.push_back(temp->val);
                S.pop();
            }
            if(temp->right){
                S.push(temp->right);
                temp->right = NULL; //避免回溯时再次将temp->right读进栈
            }
            if(temp->left){
                S.push(temp->left);
                temp->left = NULL; //避免回溯时再次将temp->left读进栈 
            }
        }
        return r;
    }
};
