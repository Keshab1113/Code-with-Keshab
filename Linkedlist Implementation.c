#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
void linkedlist(struct Node*ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}
int main(){
    struct Node*head;
    struct Node*first;
    struct Node*second;
    struct Node*third;
    head = (struct Node*)malloc(sizeof(struct Node));
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    head->data=7;
    head->next=first;
    first->data=17;
    first->next=second;
    second->data=77;
    second->next=third;
    third->data=27;
    third->next=NULL;
    linkedlist(head);
}
