#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

bool areIdentical(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    int count = 0;
    while (temp1 != NULL && temp2 != NULL)
    {
        if(temp1->data != temp2->data){
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
     return (temp1 == NULL && temp2 == NULL);
}
   
int main()
{
    // Create first linked list: 3 -> 2 -> 1
    Node *head1 = new Node(3);
    head1->next = new Node(2);
    head1->next->next = new Node(1);

    // Create second linked list: 3 -> 2 ->
    Node *head2 = new Node(3);
    head2->next = new Node(2);
    head2->next->next = new Node(1);

  
    if (areIdentical(head1, head2))
        cout << "True";
    else
        cout << "False";

    return 0;
}