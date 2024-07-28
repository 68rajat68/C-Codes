//A Program to learn templates classes.

#include<bits/stdc++.h>
using namespace std;

template <typename T>

class Node{  //Tempate class
    public:
    T value;
    Node* next;

    Node(T data){
        value=data;
        next=NULL;
    }
};

int main(){
    Node<int> node1(9);  //First way to make objects.
    Node<int>* new_node=new Node<int>(3);  //Second way to make objects.
    //cout<<node1->value<<endl;
    cout<<new_node->value<<endl;
    Node<char>* new_char=new Node<char> ('r');
    cout<<new_char->value<<endl;
    return 0;
}