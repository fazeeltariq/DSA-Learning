#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

static int idx = -1;

Node* createTree(int arr[]) {
    idx++;  
    if (arr[idx] == -1) {
        return NULL;
    }

    Node *root = new Node(arr[idx]);
    root->left = createTree(arr);
    root->right = createTree(arr);
    return root;
}

// --- Traversals ---
void preorder(Node* root) {
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// --- Level Order (BFS) ---
void level_order(Node* root) {
    if (root == NULL)
        return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);  

    while (!q.empty()) {
        Node *current = q.front();

        q.pop();

        if (current == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } 
        else {
            cout << current->data << " ";

            if (current->left != NULL)
                q.push(current->left);
            if (current->right != NULL)
                q.push(current->right);
        }
    }
}

int height (Node *root) {
    if(root == NULL) return 0;

    int left = height (root->left);
    int right = height (root->right);

    return  max (left,right) + 1;
}

int countNodes (Node *root) {
    if (root == NULL) return 0;

    return 1 + countNodes (root->left) + countNodes (root->right);
}

int sumofNodes (Node *root) {
    if (root == NULL) return 0;

    return root->data + sumofNodes (root->left) + sumofNodes(root->right);
}

int diameterofBinaryTree (Node *root) {
    if (root == NULL) return 0;
    
    int leftDia = diameterofBinaryTree (root->left);
    int rightDia = diameterofBinaryTree (root->right);
    int currDia = height (root->left) + height (root->right);

    return max (currDia, rightDia, leftDia);
}

int main() {
    int arr[11] = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = createTree(arr);

    cout << "Height of tree: " << height (root);
    cout << "\nTotal of tree: " << countNodes (root);
    cout << "\nSum of tree: " << sumofNodes (root);
    cout << "\nDiameter of tree: " << diameterofBinaryTree(root);

    cout << "\nPreorder Traversal: ";
    preorder(root);
    cout << "\nInorder Traversal: ";
    inorder(root);
    cout << "\nPostorder Traversal: ";
    postorder(root);
    cout << "\nLevel Order Traversal: \n";
    level_order(root);
    cout << endl;

    return 0;
}
