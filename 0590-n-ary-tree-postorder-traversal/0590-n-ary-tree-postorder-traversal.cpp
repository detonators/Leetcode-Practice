/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> res;
        if (root) traverse(root, res);
        return res;
    }
private:
    void traverse(Node* node, vector<int>& res) {
        for (Node* child : node->children) {
            traverse(child, res);
        }
        res.push_back(node->val);
    }
};
