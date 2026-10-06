#include <iostream>
using namespace std;

class Tree_Node {
public:
    int data;
    Tree_Node* Left;
    Tree_Node* Right; 
    
    Tree_Node(int value) {
        data = value ;
        Left = NULL;
        Right = NULL;
    }
};

// Print tree
void print(Tree_Node* root) {
    if (root == NULL)
        return;

    cout << root->data << " ";
    print(root->Left);
    print(root->Right);
}

int main(){
    Tree_Node* root = new Tree_Node(1);

    root->Left = new Tree_Node(2);
    root->Right = new Tree_Node(3);

    root->Left->Left = new Tree_Node(4);
    root->Left->Right = new Tree_Node(5);
    root->Right->Left = new Tree_Node(6);
    root->Right->Right = new Tree_Node(7);

    print(root);

    return 0;
}
