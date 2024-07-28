//A Program to find minimum and maximum distance between critical points in the given DoublyLinkedList.

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
        return ;
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

bool isCriticalPoint(Node* &point){
    if(point->prev->value < point->value && point->next->value < point->value){
        return true;
    }
    if(point->prev->value > point->value && point->next->value > point->value){
        return true;
    }
    return false;
}

vector<int> distanceBetweenCriticalPoints(Node* &head ,Node* &tail){
    vector<int> ans(2,INT_MAX);
    int firstCP=(-1),lastCP=(-1);

    Node* currNode=tail->prev;
    if(currNode==NULL){
        ans[0]=ans[1]=(-1);
        return ans;
    }
    int currPos=0;
    while(currNode->prev){
        if(isCriticalPoint(currNode)){
            if(firstCP==(-1)){
                firstCP=lastCP=currPos;
            }else{
                ans[0]=min(ans[0],(currPos-lastCP));
                ans[1]=currPos-firstCP;
                lastCP=currPos;
            }
        }
        currPos++;
        currNode=currNode->prev;
    }

    if(ans[0]==INT_MAX){
        ans[0]=ans[1]=(-1);
    }
    return ans;
}

int main(){
    DoublyLinkedList L1;
    L1.insertAtTail(1);
    L1.insertAtTail(5);
    L1.insertAtTail(4);
    L1.insertAtTail(2);
    L1.insertAtTail(6);
    L1.insertAtTail(3);
    L1.display();
    vector<int> Ans = distanceBetweenCriticalPoints(L1.head,L1.tail);
    cout<<"\n[ "<<Ans[0]<<" , "<<Ans[1]<<" ] ";
    
    return 0;
}