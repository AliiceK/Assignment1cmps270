#include <iostream>
using std::cin;
using std::cout;

template <typename T> 
    struct treeNode {
        T *data;
        struct treeNode *left;
        struct treeNode *right;
    
        treeNode(T value) {
            data = value;
            left = NULL; //constructor
            right = NULL;
        };
}



treeNode* addNode(treeNode* node, T value ) {
    if (node == NULL) {
        return new treeNode(value);
    } else {
        treeNode* cur;
        if  (value <= node->data) { //move to left subtree
            cur = addNode(node->left, value);
            node->left = cur;
        } else {
            cur = addNode(root->right, data); //move to right subtree
            node->right = cur;
        }
        return node;
    }
}

treeNode* deletenode(treeNode* root, T value) {
    if (root == NULL) {
        return node;
    }

    if (root->data > value) {
        root->left = deletenode(root->left, value);
        return root;
    } else if (root->data < k) {
        root->right = deletenode(root->right, value);
        return root;
    }


    if(root->left == NULL) {
        treeNode* temp = root->right;
        delete root;
        retrun temp;
    }
}



int main() {
    struct treeNode* root = new Node(1);
}