#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Helper function jo height nikalega aur imbalance hone par -1 return karega
int checkHeight(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    
    // Left subtree ki height check karo
    int leftHeight = checkHeight(root->left);
    if (leftHeight == -1) return -1; 
    
    // Right subtree ki height check karo
    int rightHeight = checkHeight(root->right);
    if (rightHeight == -1) return -1; 
    
    // Agar height difference 1 se zyada hai toh unbalanced signal (-1) do
    if (abs(leftHeight - rightHeight) > 1) {
        return -1;
    }
    
    // Current node ki height return karo
    return max(leftHeight, rightHeight) + 1;
}

// Function jo check karega ki tree balanced hai ya nahi
bool isBalanced(TreeNode* root) {
    return checkHeight(root) != -1;
}

int main() {
    // Test Case Tree creation: [1, 2, 2, 3, 3, null, null, 4, 4]
    //        1
    //       / \
    //      2   2
    //     / \   \
    //    3   3  null
    //   / \
    //  4   4
    
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(3);
    root->left->left->left = new TreeNode(4);
    root->left->left->right = new TreeNode(4);

    if (isBalanced(root)) {
        cout << "Result: The tree is Balanced." << endl;
    } else {
        cout << "Result: The tree is Unbalanced." << endl;
    }

    return 0;
}