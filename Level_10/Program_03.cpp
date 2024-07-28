//A Program to delete an element if neighbors have the same value while traversing from right to left .

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node* prev;

    Node(int data){
        value=data;
        next=NULL;
        prev=NULL;
    }
};

class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head=NULL;
        tail=NULL;
    }

    void insertAtTail(int value){
        Node* new_node=new Node(value);
        if(tail==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
    }

    void display(){
        Node* temp=head;
        while(temp){
            cout<<temp->value<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
//Function for deleting same elements in given DoublyLinkedList.

void deleteDuplicates(Node* &head,Node* &tail){
    Node* temp=tail;
    while(temp->prev){
        if(temp->value==temp->prev->value){
            Node* free_ptr=temp->prev;
            temp->prev=temp->prev->prev;
            free_ptr->prev->next=temp;
            free(free_ptr);
        }else{
            temp=temp->prev;
        }
    }
}
//Function for deleting elements whose neighbors have the same value.

void deleteWithSameNeighbor(Node* &head,Node* &tail){
    Node* temp=tail->prev;
    while(temp!=head){
        if(temp->next->value==temp->prev->value){
            Node* prev_ptr=temp->prev;
            temp->next->prev=temp->prev;
            temp->prev->next=temp->next;
            free(temp);
            temp=prev_ptr;
        }else{
            temp=temp->prev;
        }
    }
}
int main(){
    DoublyLinkedList L1;
    L1.insertAtTail(2);
    L1.insertAtTail(1);
    L1.insertAtTail(1);
    L1.insertAtTail(2);
    L1.insertAtTail(1);
    L1.insertAtTail(3);
    L1.display();
    deleteWithSameNeighbor(L1.head,L1.tail);
    L1.display();
    return 0;
}