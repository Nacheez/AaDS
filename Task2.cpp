#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int num;
    Node* left;
    Node* right;
};
 
Node* CreateNewNode(int num){
    Node* node = new Node;
    node->num = num;
    node->left = NULL;
	node->right = NULL;
    return node;
} 
 
Node* Add(Node* root, int num){
    if (root == NULL) {
        return CreateNewNode(num);
	}
    if (num < root->num) {
        root->left = Add(root->left, num);
	}
    else if (num > root->num) {		
        root->right = Add(root->right, num);
    return root;
	}
}

Node* Del(Node* root) {
    if (root == NULL || (root->right != NULL && root->left !== NULL)) {
        return NULL;
    }
    if(root->right != NULL && root->left == NULL) {
        free(root);
        root = root->right;
        return root;
    }
    if (root->left != NULL && root->right == NULL) {
        free(root);
        root = root->left;
        return root;
    }
 
    root->left = Del(root->left);
    root->right = Del(root->right);
 
    return root;
}