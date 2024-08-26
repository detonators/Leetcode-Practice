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
        if (!root) return {};  // Return an empty vector if root is null

        vector<int> ans;
        stack<Node*> s;
        s.push(root);

        while (!s.empty()) {
            Node* node = s.top();
            s.pop();
            ans.push_back(node->val);

            // Push children to the stack in left-to-right order so that the leftmost child is processed last.
            for (Node* child : node->children) {
                if (child) s.push(child);
            }
        }

        // Reverse the result to get the correct postorder traversal
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
