#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *right;
    Node *left;
    Node(int val){
        data = val;
        right = nullptr;
        left = nullptr;
    }
};

Node* insert(Node* node, int key){
    if (node == NULL){
        return new Node(key);
    }
    if (key < node->data){
        node->left = insert(node->left, key);
    }
    else if (key > node->data){
        node->right = insert(node->right, key);
    }
    return node;
}

void Postorder(Node* root){
    if (root == NULL){
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << "\n";
}

int main(){
    int n;
    cin >> n;
    Node* root = NULL;
    // Insert n nodes
    for(int i=0; i<n; i++){
        int val;
        cin >> val;
        root = insert(root, val);
    }
    Postorder(root);
    return 0;
}