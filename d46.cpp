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

    int height(Node* node) {
        if (node == nullptr) return -1;
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
        return max(leftHeight, rightHeight) + 1;
    }

    int countNodes(Node* node) {
        if (node == nullptr) return 0;
        return 1 + countNodes(node->left) + countNodes(node->right);
    }

    int findMax(Node* node) {
        if (node == nullptr) return INT_MIN;
        int maxLeft = findMax(node->left);
        int maxRight = findMax(node->right);
        return max(node->data, max(maxLeft, maxRight));
    }
};

int main() {
    BinaryTree tree;
    tree.createTree();

    int treeHeight = tree.height(tree.root);
    cout << "Height of the tree: " << treeHeight << endl;

    int totalNodes = tree.countNodes(tree.root);
    cout << "Total number of nodes: " << totalNodes << endl;

    tree.root = new Node(10);
    tree.root->left = new Node(20);
    tree.root->right = new Node(30);
    tree.root->left->left = new Node(40);
    tree.root->left->right = new Node(50);

    int maxValue = tree.findMax(tree.root);
    cout << "Maximum value: " << maxValue << endl;

    return 0;
}
