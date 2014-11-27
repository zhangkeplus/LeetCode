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
	int getHeight(TreeNode *t){
	    if(!t){
	        return 0;
	    }
	    return 1 + max(getHeight(t->left), getHeight(t->right));
	}
	bool differMoreThanOne(int x, int y){
	    int t = x - y;
	    if(t>1 || t < -1){
	        return true;
	    }
	    return false;
	} 
    bool isBalanced(TreeNode *root){
		if(!root){
		    return true;
		}
		int h1 = getHeight(root->left);
		int h2 = getHeight(root->right);
		if(differMoreThanOne(h1,h2)){
		    return false;
		}
		return isBalanced(root->left) && isBalanced(root->right);
	}
};
