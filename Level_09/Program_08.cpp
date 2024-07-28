//1. A Program to merge given two sorted linked lists which is agian sorted.
//2. A Program to merge given k sorted linked lists.

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
};

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
//Function for merging two Linked List.(Program_01)

Node* mergetwoLL(Node* &head1,Node* &head2){
    /*Node* temp1=head1;
    Node* temp2=head2;
    Node* new_head=temp2;
    if(temp1->value < temp2->value){
        new_head=temp1;
    }

    //cout<<new_head->value<<endl;
    //while(temp1->next!=NULL && temp2->next!=NULL){

        /*if(temp1->next->value < temp2->value){
            //Node* temp=temp1->next;
            //temp1->next=temp2;
            //temp1=temp;
            
        }else
    if(new_head==temp1){ 
     while(temp1->next!=NULL && temp2->next!=NULL){
        if(temp1->next->value >= temp2->value){
            Node* temp=temp1->next;
            temp1->next=temp2;
            temp1=temp2;
            temp2=temp;
            //cout<<temp1->value<<" "<<temp2->value<<" ";
        }else {
            temp1=temp1->next;
        }
    }
    }else{
        Node* temp=temp1;
        temp1=temp2;
        temp2=temp;
    while(temp1->next!=NULL && temp2->next!=NULL){
        if(temp1->next->value >= temp2->value){
            Node* temp=temp1->next;
            temp1->next=temp2;
            temp1=temp2;
            temp2=temp;
            //cout<<temp1->value<<" "<<temp2->value<<" ";
        }else {
            temp1=temp1->next;
        }
    }
    if(temp1->next == NULL){
        temp1->next=temp2;
    }
    if(temp2->next == NULL){
        temp2->next=temp1;
    }
    return new_head;
    }*/

    //Method_02
    //Time Complexity O(n+m) where n and m are lengths of given LinkedList.
    Node* new_head=new Node(-1);
    Node* ptr1=head1;
    Node* ptr2=head2;
    Node* ptr3=new_head;
    while(ptr1 && ptr2){
        if(ptr1->value < ptr2->value){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    if(ptr1){
        ptr3->next=ptr1;
    }else{
        ptr3->next=ptr2;
    }
    return new_head->next;
}
//Program_02
Node* mergeLinkedLists(vector<Node*> &lists){
    if(lists.size()==0){
        return NULL;
    }
    while(lists.size()>1){
        Node* mergeHead=mergetwoLL(lists[0],lists[1]);
        lists.push_back(mergeHead);
        lists.erase(lists.begin());
        lists.erase(lists.begin());

    }
    return lists[0];
}
int main(){
    LinkedList L1,L2,L3,L4;
    L1.insert(1);
    L1.insert(4);
    L1.insert(6);
    L1.insert(7);
    display(L1.head);
    L2.insert(2);
    L2.insert(5);
    L2.insert(7);
    L2.insert(8);
    display(L2.head);
    L3.insert(3);
    L3.insert(6);
    //L2.insert(9);
    //L2.insert(10);
    display(L3.head);
    //Node* Ans=mergetwoLL(L1.head,L2.head);
    vector<Node*> lists;
    lists.push_back(L1.head);
    lists.push_back(L2.head);
    lists.push_back(L3.head);
    L4.head=mergeLinkedLists(lists);
    display(L4.head);
    return 0;
}