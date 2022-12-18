// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void InsertAtHead(node* &head, int d){
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}
void print(node* &head){
    node* temp = head;
    while (temp != NULL)
    {
        cout<<temp -> data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    node *node1 = new node(10);
    node* head = node1;
    print(head);
    InsertAtHead(head, 12);
    print(head);
    InsertAtHead(head, 15);
    print(head);
    return 0;
}

Output:    10
        12 10
     15 12 10
