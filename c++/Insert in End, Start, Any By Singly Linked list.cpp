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
void InserAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail -> next = temp;
    tail = tail -> next;
}
void InsertAtPosition(node* tail, node* &head, int position, int d){
    if(position==1){
        InsertAtHead(head, d);
        return;
    }
    node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        InserAtTail(tail,d);
        return;
    }
    node* nodeToInsert = new node(d);
    nodeToInsert-> next = temp ->next;
    temp -> next = nodeToInsert;
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
    node* tail = node1;
    print(head);
    InserAtTail(tail, 5);
    print(head);
    InserAtTail(tail, 6);
    print(head);
    InserAtTail(tail, 7);
    print(head);
    InsertAtHead(head, 12);
    print(head);
    InsertAtHead(head, 15);
    print(head);
    InsertAtPosition(head, 1, 20);
    print(head);
    InsertAtPosition(head, 4, 99);
    print(head);
    return 0;
}

// Output: 10 
10 5
10 5 6
10 5 6 7
12 10 5 6 7
15 12 10 5 6 7
20 15 12 10 5 6 7
20 15 12 99 10 5 6 7
