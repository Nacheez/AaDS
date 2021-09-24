#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* CreateNewNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* Add(Node* root, int arr[], int i) {
    for (int i = 0; i < arr.length-1; i++) {
        if(root == NULL) {
            root = CreateNewNode(arr[i]);
        }
        else if(arr[i] <= root->arr[i]) {
            root->left = Add(root->left, arr[]);
        }
        else {
            root->right = Add(root->right, arr[i]);
        }
        return root;
    }
}