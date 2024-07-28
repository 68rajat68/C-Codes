//A Program to check given doublyLinkedList is palindrome or not.

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
        return;
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
//Function for cheking palindrome or not 

bool isPalindromeDLL(Node* head,Node* tail){
    Node* start=head;
    Node* end=tail;
    while(start!=end && end!=start->prev){
        if(start->value!=end->value){
            return false;
        }
        start=start->next;
        end=end->prev;
    }
    return true;
}

int main(){
    DoublyLinkedList L1;
    L1.insertAtTail(1);
    L1.insertAtTail(2);
    L1.insertAtTail(3);
    L1.insertAtTail(3);
    L1.insertAtTail(2);
    L1.insertAtTail(1);
    L1.display();
    bool Ans=isPalindromeDLL(L1.head,L1.tail);
    if(Ans) cout<<"Given Doubly Linked List is palindrome ";
    else cout<<"Given Doubly Linked List is not a Palindrome ";
    return 0;
}