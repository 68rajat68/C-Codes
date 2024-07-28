// A Program to return the node at which the two lists intersect.

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

    void insertAtTail(int value){
        Node* new_node=new Node(value);
        if(head==NULL){
            head=new_node;
            return ;
        }
        Node* temp=head;
        while((temp->next!=NULL)){
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
//Function for finding length of the LL
int lengthOfLL(Node* head){
    int Ans_length=0;
    if(head==NULL){
        return Ans_length;
    }
    while(head!=NULL){
        Ans_length++;
        head=head->next;
    }
    return Ans_length;
}

//Function for finding intersection node.

Node* intersectionNode(Node* head1,Node* head2){
    int length1=lengthOfLL(head1);
    int length2=lengthOfLL(head2);
    if(length1>=length2){
        int L=(length1-length2);
        while(L){
            head1=head1->next;
            L--;
        }
    }else{
        int L=(length2-length1);
        while(L){
            head2=head2->next;
            L--;
        }
    }
    cout<<"AA Gaya"<<endl;
    while(head1!=NULL && head2!=NULL){
        if(head1 == head2){
            return head1;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return NULL;
}

int main(){
    LinkedList L1,L2;
    L1.insertAtTail(1);
    L1.insertAtTail(2);
    L1.insertAtTail(3);

    L2.insertAtTail(4);
    L2.insertAtTail(5);
    L2.insertAtTail(6);
    //L2.head->next->next->next=L1.head->next->next;
    Node* Ans=intersectionNode(L1.head,L2.head);
    if(Ans) cout<<Ans->next<<endl;
    else cout<<"-1";
    return 0;
}