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
    vector<int> preorderTraversal(TreeNode *root) {
        if(!root){
            return r;
        }
        r.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return r;
    }
};


class Solution {
public:
    vector<int> r;
    stack<TreeNode *> S;
    vector<int> preorderTraversal(TreeNode *root) {
        if(!root){
            return r;
        }
        while(!S.empty()){
            S.pop();
        }
        S.push(root);
        while(!S.empty()){
            TreeNode *temp = S.top();
            S.pop();
            if(temp->right){
                S.push(temp->right);
            }
            if(temp->left){
                S.push(temp->left);
            }
            r.push_back(temp->val);
        }
        return r;
    }
};
