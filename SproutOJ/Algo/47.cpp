#include<iostream>
using namespace std;

struct Node{
    int val;
    Node *right;
    Node *left;
    Node(int data){
        val = data;
        right = nullptr;
        left = nullptr;
    }
};

Node* insert(Node* node, int v){
    if (node == NULL){
        return new Node(v);
    }

    if (v > node->val){
        node->right = insert(node->right, v);
    }

    if (v < node->val){
        node->left = insert(node->left, v);
    }

    return node;
}

void postorder(Node* node){
    if (node == NULL){
        return;
    }
    postorder(node->left);
    postorder(node->right);
    cout << node->val << "\n";
}

int main(){
    Node* node = NULL;
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int val;
        cin >> val;
        node = insert(node, val);
    }
    postorder(node);
}