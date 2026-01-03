#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *left;
    Node *right;
    int height;
    Node (int val) {
        this->val = val;
        height = 1;
        left = right = NULL;
    }
};

class AVLTree {
public:
    Node *root;

    AVLTree () {
        root = NULL;
    }

    int get_height (Node *root) {
        if (root == NULL) return 0;
        return root->height;
    }
    void update_height (Node *root) {
        root->height = 1+max (get_height(root->left),get_height(root->right));
    }

    int get_balance (Node *root) {
        return get_height (root->left) - get_height (root->right);
    }

    Node *rotateRight (Node *y) {
        Node *x = y->left;
        Node* t1 = x->right;

        x->right = y;
        y->left = t1;

        update_height (y);
        update_height (x);
        return x;

    }
    
    Node *rotateLeft (Node *y) {
        Node *x = y->right;
        Node *t1 = x->left;

        x->left = y;
        y->right = t1;

        update_height (y);
        update_height (x);

        return x;
    }

    Node* balanceNode (Node *root) {
        int balance = get_balance (root);

        // LL
        if (balance > 1 && get_balance (root->left) >= 0) {
            root = rotateRight (root);
        }
        // LR
        else if (balance > 1 && get_balance (root->left) < 0) {
            root->left = rotateLeft (root->left);
            return rotateRight (root);
        }

        // RR
        else if (balance < -1 && get_balance (root->right) <= 0) {
            return rotateLeft (root);
        }

        // RL
        else if (balance < -1 && get_balance (root->right) > 0) {
            root->right = rotateRight (root->right);
            return rotateLeft (root);
        }

        // no imbalance
        return root;
    }

    Node *insert (Node *root, int val) {
        if (root == NULL) return new Node (val);

        if (root->val < val) {
            root->right = insert (root->right,val);
        }
        else if (root->val > val) {
            root->left = insert(root->left,val);
        }
        else return root;

        update_height (root);
        return balanceNode (root);
    }

    void insert(int val) {
        root = insert(root,val);
    }


    Node* findsuccessor(Node *temp) {
    while (temp && temp->left)
        temp = temp->left;
    return temp;
}

Node* deleteNode(Node *root, int val) {
    if (root == NULL)
        return NULL;

    if (val < root->val) {
        root->left = deleteNode(root->left, val);
    }
    else if (val > root->val) {
        root->right = deleteNode(root->right, val);
    }
    else {
        if (root->left == NULL && root->right == NULL) {
            delete root;
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
            Node *temp = findsuccessor(root->right);
            root->val = temp->val;
            root->right = deleteNode(root->right, temp->val);
        }
    }
    if (root == NULL)
        return root;

    update_height(root);
    return balanceNode(root);
}

void deleteNode(int val) {
    root = deleteNode(root, val);
}



};
int main()
{

   return 0;
}