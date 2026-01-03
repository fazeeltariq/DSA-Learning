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
    if (root == NULL) return 0;

    
    int left = height (root->left);
    int right = height (root->right);

    return  max (left,right) + 1;
}


int countNodes (Node *root) {
    if (root == NULL) return 0;

    return 1 + countNodes (root->left) + countNodes (root->right);
}

int diameter (Node *root) {
    if (root == NULL) return 0;

    int curheight = height (root->left)+height(root->right);
    return max (curheight,max(diameter(root->left),diameter(root->right)));
}


void topviewOfTree (Node *root) {
    queue<pair<Node*,int>> q;        // data,dis

    map<int,int> mp;       // dist, node.data  
    q.push (make_pair(root,0));

    while (!q.empty())
    {
        pair<Node*,int> p = q.front();
        q.pop();

        if (mp.find (p.second) == mp.end ()) {
            cout << p.first->data << " ";
            mp.insert (make_pair (p.second,p.first->data));
        }
        
        if (p.first->left != NULL) {
            q.push(make_pair(p.first->left,p.second-1));
        }
        if (p.first->right != NULL) {
            q.push(make_pair(p.first->right,p.second+1));
        }
    }
    
}


// queue<Node*> q;
//     q.push(root);

//     while (!q.empty())
//     {
//         Node *cur = q.front();
//         q.pop();

//         cout << cur->data << " ";

//         if (cur->left != NULL) {
//             q.push(cur->left);
//         }

//         if (cur->right != NULL) {
//             q.push(cur->right);
//         }
//     }


void kthLevelofTree (Node *root, int k ){
    if (root == NULL) return;
    
    
    if (k == 1) {
        cout << root->data << " ";
        return;
    }
   
    kthLevelofTree(root->left,k-1);
    kthLevelofTree(root->right,k-1);
}

Node* lowestCommonAncestor (Node *root, Node *p, Node *q) {
    if (root == NULL) return NULL;

    if (root == p || root  == q) {
        return root;
    }

    Node *left = lowestCommonAncestor (root->left,p,q);
    Node *right = lowestCommonAncestor (root->right,p,q);

    if (left == NULL && right == NULL) return NULL;
    else if ((left != NULL && right == NULL)) return left;
    else if ((left == NULL && right != NULL)) return right;
    return root;
}

int transformToSumTree (Node *root) {
    if (root == NULL) return 0;

    root->data = root->data + transformToSumTree (root->left)+transformToSumTree (root->right);
    return root->data;
}




int main() {
    int arr[11] = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = createTree(arr);

    cout << "Height of tree: " << height (root);
    cout << "\nTop view of a tree: ";
    topviewOfTree(root);

    cout << "\nK-th level of a tree: ";
    kthLevelofTree(root,3);

    int sumofroot = transformToSumTree (root);

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
