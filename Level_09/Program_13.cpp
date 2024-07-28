//A Program to print linked list like 
//A1->An->A2->A(n-1)->... and soo on for given linked list

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

    void insert(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            return;

        }
        Node* temp=head;
        while(temp->next){
            temp=temp->next;

        }
        temp->next=new_node;
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

//Function for rearranging the given LinkedList in requred form.

void rearrenge(Node* &head){
    Node* slow=head;
    Node* fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    //Now slow is on middle element.
    Node* ptr1=slow->next;
    slow->next=NULL;
    Node* prev=slow;
    while(ptr1 ){
        Node* nextPtr=ptr1->next;
        ptr1->next=prev;
        prev=ptr1;
        ptr1=nextPtr;
    }
    Node* ptr2=head;
    Node* ptr3=prev;
    while(ptr2!=ptr3){
        Node* temp=ptr2->next;
        ptr2->next=ptr3;
        ptr2=ptr3;
        ptr3=temp;
    }

}
int main(){
    LinkedList L1 ;
    L1.insert(1);
    L1.insert(2);
    L1.insert(3);
    L1.insert(4);
    L1.insert(5);
    L1.insert(6);
    //L1.insert(7);
    L1.display();
    rearrenge(L1.head);
    L1.display();
    return 0;
}