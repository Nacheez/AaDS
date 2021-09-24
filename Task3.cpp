#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int num;
    Node* left;
    Node* right;
};
 
Node* CreateNewNode(int num) {
    Node* node = new Node;
    node->num = num;
    node->left = NULL;
    node->right = NULL;
    return node;
}
 
bool RootPath(Node* root, vector<int> &arr, int x) {
    
    if (root == NULL) {
        return false;
    }
    
    arr.push_back(root->num);   
     
    if (root->num == x) {   
        return true;
    }
     
    if (RootPath(root->left, arr, x) || RootPath(root->right, arr, x)) {
        return true;
    }
    
    arr.pop_back();
    
    return false;           
}

void Output(Node* root, int x) {
    
    vector<int> arr;
     
    if (RootPath(root, arr, x)) {
        for (int i=0; i<arr.length-1; i++) {
            cout << arr[i];
        }
    }
    else {
        cout << "The tree doesn't contain " >> x;
    }
}