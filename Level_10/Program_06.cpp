//A Program to learn circular Linked List.

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

class CircularLinkedList{
    public:
    Node* head;

    CircularLinkedList(){
        head=NULL;
    }

    void display(){
        Node* temp=head;
        do{
            cout<<temp->value<<"->";
            temp=temp->next;
        }while(temp!=head);
        cout<<"NULL"<<endl;
    }
 
    void insertAtHead(int value){
        Node* new_node=new Node(value);
        if(head==NULL){
            head=new_node;
            new_node->next=head;
            return;
        }
        Node* tail=head;

        while(tail->next!=head){
            tail=tail->next;
        }
        tail->next=new_node;
        new_node->next=head;
        head=new_node;
    }

    void insertAtTail(int value){
        Node* new_node=new Node(value);
        if(head==NULL){
            head=new_node;
            head->next=head;
            return;
        }
        Node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        tail->next=new_node;
        new_node->next=head;
        tail=new_node;
    }

    void insertAtKth(int value,int k){
        Node* new_node=new Node(value);
        int pos=1;
        Node* temp=head;
        while(pos!=(k-1)){
            temp=temp->next;
            pos++;
        }
        Node* temp_next=temp->next;
        temp->next=new_node;
        new_node->next=temp_next;
    }

    void deleteFromStart(){
        if(head==NULL){
            return;
        }
        Node* temp=head;
        Node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        head=head->next;
        tail->next=head;
        free(temp);
    }

    void deleteFromEnd(){
        Node* temp=head;
        while(temp->next->next!=head){
            temp=temp->next;
        }
        Node* temp_tail=temp->next;
        temp->next=head;
        free(temp_tail);
    }

    void deleteFromKth(int k){
        Node* temp=head;
        int pos=1;
        while(pos!=(k-1)){
            temp=temp->next;
            pos++;
        }
        Node* temp_next=temp->next;
        temp->next=temp_next->next;
        free(temp_next);
    }
};

int main(){
    CircularLinkedList L1;
    L1.insertAtHead(3);
    L1.insertAtHead(2);
    L1.insertAtHead(1);
    L1.insertAtHead(0);
    L1.insertAtTail(5);
    L1.insertAtKth(4,5);
    L1.display();
    //L1.deleteFromStart();
    //L1.deleteFromStart();
    //L1.deleteFromEnd();
    L1.deleteFromKth(3);
    L1.display();
    return 0;
}