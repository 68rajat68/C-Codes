/*
-------------- Linked List ---------------
->> Dynamic Size
->> Non-Contiguous memory allocation
->> Insertion and delation are not expensive 
------- Types of Linked List ---------
-->> 1. Singly Linked List -> In this every node points to its successor node.
-->> 2. Doubly Linked List -> In this every node points to its successor node and previous node also.
-->> 3. Circular Linked List -> This is singly linked list with last node points to head node .

*/

#include<bits/stdc++.h>
using namespace std;

//Implementation of listnode in singly linked list.

class Node{
    public:
    int value;
    Node* next;

    Node(int data){
        value=data;
        next=NULL;
    }
};
//Function to add one value at stating of the linked list.
void insertAtHead(Node* &head, int value){
    Node* new_node=new Node(value);
    new_node->next=head;
    head = new_node;
}
//Function for adding new value at the ending of the linked list.
void insertAtTail(Node* &head,int value){
    Node* temp=head;
    while((temp->next)!=NULL){
        temp= temp->next;
    }
    Node* new_node=new Node(value);
    temp->next=new_node;

}
//Function for adding new element at given position.
void insertAtGiven(Node* &head,int value,int pos){
    if(pos==0){
        insertAtHead(head,value);
        return;
    }
    Node* temp=head;
    int current_Pos=0;
    while(current_Pos!=(pos-1)){
        temp=temp->next;
        current_Pos++;
    }
    Node* new_node=new Node(value);
    new_node->next=temp->next;
    temp->next=new_node;
}
//Function for updating at given position.
void updateAtGiven(Node* &head,int k,int value){
    Node* temp=head;
    int current_pos=0;
    while(current_pos!=(k)){
        temp=temp->next;
        current_pos++;
    }
    temp->value=value;
}
//Function for displaying given linked list.
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
//Function for deletion of the node from starting
void deleteFromHead(Node* &head){
    Node* temp=head;
    head=head->next;
    free(temp);
}
//Function for deletion of the node from ending
void deleteFromEnd(Node* &head){
    Node* temp1=head;
    while((temp1->next)->next!=NULL){
        temp1=temp1->next;
    }
    Node* temp2=temp1->next;
    temp1->next=NULL;
    free(temp2);
}
//Function for deleting the given node.
void deleteFromGiven(Node* head,int k){
    if(k==0){
        deleteFromHead(head);
    }
    Node* temp=head;
    int current_pos=0;
    while(current_pos!=(k-1)){
        temp=temp->next;
        current_pos++;
    }
    Node* temp2=temp->next;
    temp->next=temp2->next;   // or temp->next=temp->next->next;
    free(temp2);
}
int main(){
    //Node* N=new Node(1);
    //cout<<N->value<<" "<<N->next<<endl;
    Node* head=NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    insertAtTail(head,3);
    display(head);
    insertAtGiven(head,4,1);
    display(head);
    updateAtGiven(head,2,5);
    display(head);
    //deleteFromHead(head);
    //display(head);
    //deleteFromEnd(head);
    //display(head);
    deleteFromGiven(head,2);
    display(head);
    return 0;
}