//A Program to delete kth Node from ending in given linked list.

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

//Function for deleting k th element from ending.

void deletekthFromEnd(Node* &head,int k){
    Node* temp1=head;
    Node* temp2=head;

    while(k--){
        temp2=temp2->next;
    }
    if(temp2==NULL){
        Node* temp=head;
        head=head->next;
        free(temp);
        return ;
    }
    while(temp2->next!=NULL){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    Node* temp3=temp1->next;
    temp1->next=temp1->next->next;
    free(temp3);
}


int main(){
    LinkedList L1;
    L1.insert(1);
    L1.insert(2);
    L1.insert(3);
    L1.insert(4);
    L1.insert(5);
    L1.display();
    deletekthFromEnd(L1.head,5);
    L1.display();
    return 0;
}