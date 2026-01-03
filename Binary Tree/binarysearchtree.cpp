#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *left;
    Node *right;

    Node (int v) {
        val = v;
        left = right = NULL;
    }
};

class BST {
public:
    Node *root;

    BST () { root = NULL; }

    Node* insert (Node *root, int val) {
        if (root == NULL) {
            return new Node (val);
        }
        if (root->val > val) {
            root->left = insert(root->left,val);
        }
        else if (root->val < val) {
            root->right =  insert (root->right,val);
        }
        return root;
    }

    Node *search(Node *root, int val) {
        if (root == NULL) {
            return NULL;
        }
        if (root->val == val) {
            return root;
        }

        if (root->val < val) {
            return search(root->right,val);
        }
        return search (root->left ,val);   
    }

    Node* findsuccessor (Node *temp) {
        while (temp && temp->left )
        {
            temp = temp->left;
        }
        return temp;
    }

    Node *deleteNode (Node *root, int val) {
        if (root == NULL) return NULL;

        if (val > root->val) {
            root->left = deleteNode(root->left,val);
        }
        else if (val < root->val) {
            root->right = deleteNode (root->right,val);
        }
        else {
            if (root->left == NULL && root->right == NULL) {
                Node *temp = root;
                delete temp;
                return NULL;
            }
            else if (root->left == NULL) {
                Node *temp = root->right;
                delete root;
                return temp;
            }
            else if (root->right == NULL) {
                Node *temp = root->left;
                delete root;
                return temp;
            }
            else {
                Node *temp = findsuccessor (root->right);
                root->val = temp->val;
                root->right = deleteNode (root->right, temp->val);
            }
        }
        return root;
    }

    void insert(int val) {
        root = insert (root,val);
    }

    void search (int val) {
        Node *data = search (root, val);
        if (data != NULL) {
            cout << val << " is present: \n";
        }
        else {
            cout << "\nValue is not present: ";
        }
    }

    void deleteNode (int val) {
        if (search(root,val) != NULL) {
            root = deleteNode (root,val);
        }
        else {
            cout << "\nValue not present: ";
        }
    }
};


bool isBST (Node *root, int mini, int maxi) {
    if (root == NULL) return true;
    
    if (root->val <= mini || root->val >= maxi) {
        return false;
    }
    
    return isBST (root->left, mini, root->val) && isBST (root->right, root->val, maxi);
}


bool isBST (Node *root) {
    return isBST (root, INT_MIN, INT_MAX);
}

int main()
{
    
   return 0;
}