//Doubly LinkedList 

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* prev;
    Node* next;
     
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

    void insertAtHead(int value){
        Node* new_node=new Node(value);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return ;
        }

        new_node->next=head;
        head->prev=new_node;
        head=new_node;
        return;
    }

    void insertAtTail(int value){
        Node* new_node=new Node(value);
        if(tail==NULL){
            head=new_node;
            tail=new_node;
            return ;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        return;
    }

    void insertAtK(int value,int k){
        if(k==1){
            insertAtHead(value);
            return;
        }
        int Pos=1;
        Node* temp=head;
        Node* new_node=new Node(value);

        while(Pos<(k-1)){
            temp=temp->next;
            Pos++;
        }
        new_node->next=temp->next;
        new_node->prev=temp;
        temp->next=new_node;
        new_node->next->prev=new_node;
        return ;
    }

    void deleteAtHead(){
        if(head==NULL){
            return ;
        }
        Node* temp=head;
        head=head->next;
        if(head==NULL){
            tail=NULL;
        }else{
            head->prev=NULL;
        }
        free(temp);
        return ;
    }

    void deleteAtTail(){
        if(head==NULL){
            return;
        }
        Node* temp=tail;
        tail=tail->prev;
        if(tail==NULL){
            head=NULL;
        }else{
            tail->next=NULL;
        }
        free(temp);
        return;
    }

    void deleteAtK(int k){
        int pos=1;
        Node* temp=head;
        while(pos<k){
            temp=temp->next;
            pos++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
        return ;
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

void reverseDoublyLL(Node* &head,Node* &tail){
    Node* curr=head;

    while(curr){
       Node* next_ptr=curr->next;
       curr->next=curr->prev;
       curr->prev=next_ptr;
       curr=next_ptr;
    }
    swap(head,tail);
}

int main(){
    DoublyLinkedList L1;
    L1.insertAtHead(1);
    L1.insertAtTail(2);
    L1.insertAtTail(3);
    L1.insertAtTail(4);

    L1.display();
    //L1.insertAtK(5,4);
    //L1.display();
    //L1.deleteAtHead();
    //L1.display();
    //L1.deleteAtK(3);
    //L1.display();
    reverseDoublyLL(L1.head,L1.tail);
    L1.display();
    return 0;
}