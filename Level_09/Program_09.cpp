//1. A Program to find middle element of the given Linked List.(Slow Fast Pointer)
//2. A Program to check in the given linked list is thier any cycle present in it.

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

    void insert(int value){
        Node* new_node=new Node(value);
        if(head==NULL){
            head=new_node;
            return ;
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
//Function for finding middle element of the given linked list.
int middleElement(Node* head){
    Node* temp1=head;
    Node* temp2=head;
    while(temp2!=NULL && temp2->next!=NULL){
        temp1=temp1->next;              //Slow Fast Pointer
        temp2=temp2->next->next;
    }
    return temp1->value;
}
//Function for finding cycle or not.(SLOW FAST POINTER)
bool cycleOrNot(Node* head){
    if(!head){
        return false;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow == fast){
            cout<<slow->value<<endl;
            return true;
        }
    }
    return false;
}
// Function for removing cycle from Linked List.

void removeCycle(Node* &head){
    Node* slow=head;
    Node* fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}
int main(){
    LinkedList L1;
    L1.insert(1);
    L1.insert(2);
    L1.insert(3);
    L1.insert(4);
    L1.insert(5);
    L1.insert(6);
    L1.insert(7);
    L1.insert(8);
    L1.head->next->next->next->next->next->next->next->next=L1.head->next->next;
    //L1.display();
    //cout<<"Middle element is: "<<middleElement(L1.head)<<endl;
    bool ans=cycleOrNot(L1.head);
    if(ans) cout<<"Cycle is present in Linked List";
    else cout<<"Cycle is not present in the given Linked List";
    cout<<"\nAfter removing cycle we get: "<<endl;
    removeCycle(L1.head);
    L1.display();
    return 0;
}