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
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        vector<vector<int> > arr;
        if(!root){
            return arr;
        }
        int i = 0;
        queue<TreeNode *> q1,q2;
        while(!q1.empty()){
            q1.pop();
        }
        while(!q2.empty()){
            q2.pop();
        }
        q1.push(root);
        bool flag = true; //ture means q1.pop
        while(!q1.empty() || !q2.empty() ){
            vector<int> temp;
            if(flag){
                while(!q1.empty()){
                    TreeNode *t = q1.front();
                    //temp.insert(temp.begin(),t->val);
                    temp.push_back(t->val);
                    if(t->left){
                        q2.push(t->left);
                    }
                    if(t->right){
                        q2.push(t->right);
                    }
                    
                    q1.pop();
                }
                flag = false;
            }
            
            else
            {
                while(!q2.empty()){
                    TreeNode *t = q2.front();
                    //temp.insert(temp.begin(),t->val);
                    temp.push_back(t->val);
                    if(t->left){
                        q1.push(t->left);
                    }
                    if(t->right){
                        q1.push(t->right);
                    }
                    q2.pop();
                }
                flag = true;
            }
            arr.insert(arr.begin(),temp);
        }
        return arr;
    }
};
