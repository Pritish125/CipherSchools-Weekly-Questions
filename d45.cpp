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

    void inorderTraversal(Node* node) {
        if (node == nullptr) return;
        inorderTraversal(node->left);
        cout << node->data << " ";
        inorderTraversal(node->right);
    }

    void postorderTraversal(Node* node) {
        if (node == nullptr) return;
        postorderTraversal(node->left);
        postorderTraversal(node->right);
        cout << node->data << " ";
    }
};

int main() {
    BinaryTree tree;
    tree.createTree();

    cout << "Inorder Traversal: ";
    tree.inorderTraversal(tree.root);
    cout << endl;

    cout << "Postorder Traversal: ";
    tree.postorderTraversal(tree.root);
    cout << endl;

    return 0;
}
