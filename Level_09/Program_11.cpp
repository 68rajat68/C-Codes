//A Program to rotate the list to the right by k steps.

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
        if (head==NULL){
            head=new_node;
            return ;
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

//Function for rotating k steps in right side.
Node* rotatekNode(Node* &head,int k){
    //Time Complexity O(2*n-k) here n is length and k is given steps.
    Node* temp=head;
    int size=0;
    while(temp->next){
        size++;
        temp=temp->next;
    }
    size++;
    cout<<size<<endl;
    k=k%size;
    if(k==0){
        return head;
    }
    temp->next=head;
    Node* temp2=head;
    int pos=(size-k-1);
    while(pos--){
        temp2=temp2->next;
    }
    Node* new_head=temp2->next;
    temp2->next=NULL;
    return new_head;
}

int main(){
    LinkedList L1,L2;
    L1.insert(1);
    L1.insert(2);
    L1.insert(3);
    L1.insert(4);
    L1.insert(5);
    L1.insert(6);
    L1.display();
    L1.head=rotatekNode(L1.head,5);
    L1.display();
    return 0;
}