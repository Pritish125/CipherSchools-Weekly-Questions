#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    Node* root;

    BinaryTree() : root(nullptr) {}

    void createTree() {
        root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);
        root->left->left = new Node(4);
        root->left->right = new Node(5);
    }

    void preorderTraversal(Node* node) {
        if (node == nullptr) return;
        cout << node->data << " ";
        preorderTraversal(node->left);
        preorderTraversal(node->right);
    }
};

int main() {
    BinaryTree tree;
    tree.createTree();
    cout << "Preorder Traversal: ";
    tree.preorderTraversal(tree.root);
    cout << endl;
    return 0;
}
