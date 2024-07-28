// A Program to reverse the nodes of the list k at a time.

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    Node(int data){
        value=data;
        next=NULL;
    }

};

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head=NULL;
    }

    void insertAtTail(int value){
        Node* new_node=new Node(value);
        if(head==NULL){
            head=new_node;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->value<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

//Function for reverse k at a time.
Node* reversek(Node* &head,int k){
    Node* preptr=NULL;
    Node* currptr=head;
    int counter =0;
    while(currptr!=NULL && counter<k){ //reverse first k nodes
        Node* nextptr=currptr->next;
        currptr->next=preptr;
        preptr=currptr;
        currptr=nextptr;
        counter++;
    }
    //currptr will give us (k+1)th node.
    if(currptr!=NULL){
    Node* new_head=reversek(currptr,k); //recursive call
    head->next=new_head;
    }
    return preptr; //preptr is new head of the reversed linkedlist
}

int main(){
    LinkedList L1;
    L1.insertAtTail(1);
    L1.insertAtTail(2);
    L1.insertAtTail(3);
    L1.insertAtTail(4);
    L1.insertAtTail(5);
    L1.insertAtTail(6);
    L1.display();
    L1.head=reversek(L1.head,4);
    L1.display();
    return 0;
}