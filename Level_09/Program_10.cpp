//A Program to check given LinkedList is palindrome or not.

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

//Function for checking palindrome or not.

bool isPalindrome(Node* head){
    Node* slow=head;
    Node* fast=head;
    //finding middle element in LL
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    //Now slow is at middle element
    //Now break the Linked List form middle
    Node* curr=slow->next;
    Node* prev=slow;
    slow->next=NULL;
    //reverse the second half of the linked list.
    while(curr!=NULL){
        Node* nextNode=curr->next;
        curr->next=prev;
        prev = curr;
        curr = nextNode;
    }
    //To check this two linked lists are same or not
    Node* head1=head;
    Node* head2=prev; //after reversing prev is at last element of the second half of LL which is second head.

    while(head2!=NULL){
        if(head1->value != head2->value){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return true;
}

int main(){
    LinkedList L1;
    L1.insert(1);
    L1.insert(2);
    L1.insert(3);
    L1.insert(3);
    L1.insert(2);
    L1.insert(1);
    //L1.insert(7);
    //L1.insert(8);
    bool Ans=isPalindrome(L1.head);
    if(Ans) cout<<"Yes, Given LL is palinrome";
    else cout<<"No, Given LL is not palinrome";
    return 0;
}