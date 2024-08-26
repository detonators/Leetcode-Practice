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
        vector<int> ans;
        if (!root) return ans;

        stack<Node*> s;
        s.push(root);

        while (!s.empty()) {
            Node* node = s.top();
            s.pop();
            ans.push_back(node->val);

            // We push the children onto the stack in the same order.
            // This ensures that the last child is processed first.
            for (Node* child : node->children) {
                if (child) s.push(child);
            }
        }

        // Reverse the result only once at the end
        std::reverse(ans.begin(), ans.end());
        return ans;
    }
};
