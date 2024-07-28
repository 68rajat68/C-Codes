//A Program to reverse the given linked list.

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

    void insertAtTail(int val){
        
        Node* new_node=new Node(val);
        if(head == NULL){
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

//Function for reverse the given linkedlist.
//Normal Method(method_01)
Node* reverse(Node* &head){
    Node* pre=NULL;
    Node* current=head;

    while(current!=NULL){
        Node* nextptr=current->next;
        current->next=pre;
        pre=current;
        current=nextptr;
        //nextptr=nextptr->next;
    }
    //when loop is ended we have pre pointing to the last element which is now head.
    Node* new_head=pre;
    return new_head;
}

//By recursion(Method_02)

Node* reverse2(Node* &head){
    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* new_head=reverse2(head->next);
    head->next->next=head;
    head->next=NULL;
    return new_head;
}

int main(){
    LinkedList L1;
    L1.insertAtTail(1);
    L1.insertAtTail(2);
    L1.insertAtTail(3);
    L1.insertAtTail(4);
    L1.insertAtTail(5);
    L1.display();
    L1.head=reverse2(L1.head);
    L1.display();
    return 0;
}