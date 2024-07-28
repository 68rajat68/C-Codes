// A Program to group all odd indices together and then even together.

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

//Function for insert all odd and even indices elements together.

void oddAndEvenLL(Node* &head){
    if(!head){
        return;
    }
    Node* temp1=head;
    Node* temp2=head->next;
    Node* temp3=head->next;

    while(temp2 && temp2->next){
        temp1->next=temp1->next->next;
        temp2->next=temp2->next->next;
        temp1=temp1->next;
        temp2=temp2->next;
        //cout<<temp1->value<<" "<<temp2->value<<" ";
    }
    //if(temp1->next->next){
    //temp1->next=temp1->next->next;
    //temp1=temp1->next;
    //}
    temp1->next=temp3;
    //temp2->next=NULL;
}

int main(){
    LinkedList L1;
    L1.insert(1);
    L1.insert(2);
    L1.insert(3);
    L1.insert(4);
    L1.insert(5);
    L1.insert(6);
    L1.insert(7);
    L1.display();
    oddAndEvenLL(L1.head);
    L1.display();
    return 0;
}