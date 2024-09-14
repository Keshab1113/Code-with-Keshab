#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class Stack{
    public:
        Node *head;
        int size;
        Stack(){
            head=NULL;
            size=0;
        }
        void push(int data){
            Node *temp = new Node(data);
            temp->next=head;
            head=temp;
            size++;
        }
        int peek(){
            if(head==NULL){
                cout<<"Stack Overflow"<<endl;
            }
            else{
                return head->data;
            }
        }
        int pop(){
            if(head==NULL){
                cout<<"Stack Overflow"<<endl;
            }
            else{
                int res=head->data;
                head=head->next;
                size--;
                return res;
            }
        }
};
int main(){
    Stack keshab;
    keshab.push(5);
    keshab.push(10);
    keshab.push(15);
    keshab.push(12);
    keshab.push(18);
    cout<<keshab.peek()<<endl;
    keshab.pop();
    cout<<keshab.peek()<<endl;
    keshab.pop();
    cout<<keshab.peek()<<endl;
    keshab.pop();
    cout<<keshab.peek()<<endl;
    keshab.pop();
    cout<<keshab.peek()<<endl;
    keshab.pop();
    cout<<keshab.peek()<<endl;
}
