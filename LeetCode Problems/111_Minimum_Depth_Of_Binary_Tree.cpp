#include <iostream>
#include <algorithm>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Minimum depth nikalne ka function
int minDepth(TreeNode* root) {
    // Base case: Agar tree empty hai
    if (root == nullptr) {
        return 0;
    }
    
    // Agar left child null hai, toh sirf right subtree mein check karo
    if (root->left == nullptr) {
        return minDepth(root->right) + 1;
    }
    
    // Agar right child null hai, toh sirf left subtree mein check karo
    if (root->right == nullptr) {
        return minDepth(root->left) + 1;
    }
    
    // Agar dono children hain, toh dono mein se minimum depth chun lo
    return min(minDepth(root->left), minDepth(root->right)) + 1;
}

int main() {
    // Sample Tree creation: [3, 9, 20, null, null, 15, 7]
    //        3
    //       / \
    //      9  20
    //         /  \
    //        15   7
    
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    int depth = minDepth(root);
    
    cout << "Minimum Depth of Binary Tree: " << depth << endl;

    return 0;
}