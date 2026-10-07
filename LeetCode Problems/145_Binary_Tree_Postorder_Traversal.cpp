#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// Helper function for postorder recursion (Left -> Right -> Root)
void postorder(TreeNode* root, vector<int>& ans) {
    if (root == nullptr) {
        return;
    }
    postorder(root->left, ans);   
    postorder(root->right, ans); 
    ans.push_back(root->val);   
}

// Main postorder traversal function
vector<int> postorderTraversal(TreeNode* root) {
    vector<int> ans;
    postorder(root, ans);
    return ans;
}

int main() {
    // Constructing a sample binary tree:
    //      1
    //       \
    //        2
    //       /
    //      3
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    // Get the traversal result
    vector<int> result = postorderTraversal(root);

    // Print the result (Expected: 3 2 1)
    cout << "Postorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}