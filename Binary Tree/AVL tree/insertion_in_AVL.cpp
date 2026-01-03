#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;
    int height;

    Node (int data) {
        this->data = data;
        left = right = NULL;
        height = 1;
    }
};


int getheight (Node *root) {
    if (root == NULL) return 0;

    return root->height;
}

int getBalance (Node *root) {
    return getheight(root->left) - getheight(root->right);
}

Node* leftRotation (Node *root) {
    Node *child = root->right;         
    Node *childLeft = child->left;

    child->left = root;
    root->right = childLeft;

    root->height = 1 + max (getheight (root->left), getheight (root->right));
    child->height = 1 + max (getheight (child->left), getheight (child->right));
  
    return child;
}

Node* rightRotation (Node *root) {
    Node *child = root->left;             
    Node *childRight = child->right;

    child->right = root;
    root->left = childRight;

    root->height = 1 + max (getheight (root->left), getheight (root->right));
    child->height = 1 + max (getheight (child->left), getheight (child->right));
  
    return child;
}


Node *insert (Node *root, int key) {
    if (root == NULL) {
        return new Node (key);
    }

    if (key < root->data) {     // left side
        root->left = insert (root->left, key);
    }
    else if (key > root->data) {       // right side
        root->right = insert (root->right, key);
    }
    else {
        return root;
    }

    root->height = 1 + max (getheight (root->left), getheight (root->right));

    // balancing check
    int balance = getBalance (root);

    // left left 
    if (balance > 1 && key < root->left->data) {
        return rightRotation (root);
    }
    // right right 
    else if (balance < -1 && key > root->right->data) {  
        return leftRotation (root);
    }
    // left right 
    else if (balance > 1 &&  key > root->left->data) {
        root->left = leftRotation (root->left);
        return rightRotation (root);  
    }
    // right left 
    else if (balance < -1 &&  key < root->right->data) {   
        root->right = rightRotation (root->right);
        return leftRotation (root);
    }
    else {
        return root;
    }
}


int main()
{
    Node *root = NULL;
    root = insert (root,10);
    root = insert (root,1);
    root = insert (root,2);
    root = insert (root,3);
    root = insert (root,4);
    root = insert (root,8);


   return 0;
}
