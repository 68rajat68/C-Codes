//A Progam to find target sum in given sorted doubly LinkedList.

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

//Function for finding target sum

vector<int> searchTargetSum(Node* head,Node* tail,int x){
    vector<int> ans(2,(-1));

    while(head!=tail){
        if((head->value+tail->value)== x){
            ans[0]=head->value;
            ans[1]=tail->value;
            return ans;
        }else if((head->value + tail->value) > x){
            tail=tail->prev;
        }else{
            head=head->next;
        }
    }
    return ans;
}

int main(){
    DoublyLinkedList L1;
    L1.insertAtTail(2);
    L1.insertAtTail(5);
    L1.insertAtTail(6);
    L1.insertAtTail(8);
    L1.insertAtTail(10);

    L1.display();
    int x;
    cout<<"\nEnter x: ";
    cin>>x;
    vector<int> Ans=searchTargetSum(L1.head,L1.tail,x);
    cout<<"\n["<<Ans[0]<<","<<Ans[1]<<"]";
    return 0;
}