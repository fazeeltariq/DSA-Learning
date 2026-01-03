// if (head == NULL) 
//         return; 

//     /* Initialize prev and node to be deleted */
//     Node *prev = head; 
//     Node *node = head->next; 

//     while (prev != NULL && node != NULL) 
//     { 
//         /* Change next link of previous node */
//         prev->next = node->next; 
//         delete(node); // delete the node
//         /* Update prev and node */
//         prev = prev->next; 
//         if (prev != NULL) 
//             node = prev->next; 
//     } 



// C++ program to remove alternate 
// nodes of a linked list 
#include <bits/stdc++.h>
using namespace std;


class Node 
{ 
    public:
    int data; 
    Node *next; 
}; 


void deleteAlt(Node *head) 
{
    if (!head) return;

    Node *temp1 = head;
    Node *temp2 = head->next;

    while (temp2 != NULL)
    {
        temp1->next = temp2->next;
        temp1 = temp2->next;
        delete temp2;

        if (temp1 == NULL) break;
        temp2 = temp1->next;
    }
}



void push(Node** head_ref, int new_data) 
{ 
    Node* new_node = new Node();

    new_node->data = new_data; 

    new_node->next = (*head_ref); 

    (*head_ref) = new_node; 
} 

void printList(Node *node) 
{ 
    while (node != NULL) 
    { 
        cout<< node->data<<" "; 
        node = node->next; 
    } 
} 

int main() 
{ 
    Node* head = NULL; 

    /* Using push() to construct below list 
    1->2->3->4->5 */
    push(&head, 5); 
    push(&head, 4); 
    push(&head, 3); 
    push(&head, 2); 
    push(&head, 1); 

    cout<<"List before calling deleteAlt() \n"; 
    printList(head); 

    deleteAlt(head); 

    cout<<"\nList after calling deleteAlt() \n"; 
    printList(head); 

    return 0; 
} 