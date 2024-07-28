//1. A Program to delete every alternate element starting from second element in the given linked list.
//2. A Program to delete all duplicate elements from the given sorted linked list.
//3. A Program to print in reverse order of the given linked list

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;

    Node(int val){
        value=val;
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

//Function for deleting every alternate elemente from the given linked list.

void deleteEveryAlternate(Node* &head){
    Node* temp=head;
    while(temp!=NULL && temp->next!=NULL){
        Node* temp2=temp->next;
        temp->next=temp->next->next;
        free(temp2);
        temp=temp->next;
    }
}

//Function for removing all duplicates from given sorted linked list.
void deleteEachDuplicate(Node* &head){
    Node* temp=head;
   /*
   //Method_01(by rajat)
    while(temp->next!=NULL ){
        if(temp->value==temp->next->value){
            if(temp->next->next==NULL){
                Node* temp3=temp->next;
                temp->next=NULL;
                free(temp3);
                return;
            }else{
            Node* temp2=temp->next;
            temp->next=temp2->next;
            free(temp2);
            }
        }else{
        temp=temp->next;
        //cout<<temp->value<<" ";
        }
    }*/
    
    //Method_02
    while(temp!=NULL){
        while(temp->next!=NULL && temp->value==temp->next->value){
            Node* temp2=temp->next;
            temp->next=temp2->next;
            free(temp2);
        }
        temp=temp->next;
    }
    
    
}
//reverse function
void reversePrint(Node* &head){
    if(head==NULL){
        return;
    }
    reversePrint(head->next);
    cout<<head->value<<" ";
}
int main(){
    LinkedList L1;
    L1.insertAtTail(1);
    L1.insertAtTail(2);
    L1.insertAtTail(2);
    L1.insertAtTail(3);
    L1.insertAtTail(3);
    L1.insertAtTail(3);
    L1.display();
    deleteEachDuplicate(L1.head);
    L1.display();
    reversePrint(L1.head);
    return 0;
}