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
    map<int,int>vi;
        void traversal(TreeNode* root,int i){
            if(root==NULL) return;
            if(vi.find(i)==vi.end()) vi[i]=root->val;
            else  vi[i]=max(root->val,vi[i]);      
            i++; 
            traversal(root->left,i);      
            traversal(root->right,i);            
        }
    
    vector<int> largestValues(TreeNode* root) {
        traversal(root,0);
        vector<int> v;
        for(auto s:vi){
                v.push_back(s.second);
        }
        return v;
    }
};