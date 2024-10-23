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
    // calculate sum of nodes at all depths
    void dfs(TreeNode* root, int depth, vector<int> &mp){
        if(!root) return;
        mp[depth]+=root->val;
        dfs(root->left, depth+1, mp);
        dfs(root->right, depth+1, mp);
    }
    // replace values in dfs
    void solve(TreeNode* root, int sib, vector<int> &mp, int depth){
        if(!root) return;
        /* save left and right node values since dfs will 
            change the values of the right and left node */
        int leftsibling = 0, rightsibling = 0;
        if(root->left) leftsibling = root->left->val;
        if(root->right) rightsibling = root->right->val;

        int ans = mp[depth] - root->val - sib;
        // cout<<"root = "<<root->val<<" sum at level = "<<mp[depth]<<" sib = "<<sib<<" ans = "<<ans<<endl;

        // replace value of cur node
        root->val = ans;
        // call for right and left nodes and pass respective siblings.
        solve(root->right, leftsibling, mp, depth+1);
        solve(root->left, rightsibling, mp, depth+1);
 
    }
    TreeNode* replaceValueInTree(TreeNode* root) {
        vector<int> mp (1e5+1, 0);
        // call dfs to calculate sum at each depth
        dfs(root, 0, mp);
        solve(root, 0, mp, 0);
        return root;
    }
};