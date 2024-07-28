//A Program to learn STL (list) i.e. doubly Linked List.

#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> L1={100,101,102,103};
    list<int> ::iterator itr_1;  //First way to make iterator.
    itr_1=L1.begin();
    //cout<<*itr_1<<endl;
    auto itr_2=L1.begin();  //Second way to make iterator.
    //cout<<*itr_2<<endl;

    //L1.end() -iterator give you address after last element .

    //L1.rbegin and L1.rend give us first elment in reversed list and address of element after last element in revered list.
    auto itr_3=L1.rbegin();
    //cout<<*itr_3<<endl;

    //advance(itr,2) gives address of 3rd element of list if itr=L1.begin or add 2 places in itr.
    auto itr_4=L1.begin();
    advance(itr_4,2);
    //cout<<*itr_4<<endl;

    //Printing full list 
    //Method_01
    for(auto num: L1){
        //cout<<num<<endl;
    }

    //Method_02
    for(auto itr=L1.begin();itr!=L1.end();itr++){
        //cout<<*itr<<endl;
    }
    //For reverse List
    for(auto itr=L1.rbegin();itr!=L1.rend();itr++){
        //cout<<*itr<<endl;
    }

    //Inserting Elements into a List.
    //1. List.insert(itr,value)  -is used to insert value before itr in the list.
    //2. List.insert(itr,count,value) -is used to insert value count no. of times before itr in the list.
    //3. List.insert(itr,str_itr,end_itr) -is used to insert values from str_itr to end_itr before itr.
    //(str_itr,end_itr) we take only str_itr and between both of them not end_itr.

    auto itr=L1.begin();
    advance(itr,2);
    //L1.insert(itr,5);
    //L1.insert(itr,2,4);
    auto l=L1.begin();
    auto r=L1.begin();
    advance(r,2);
    L1.insert(itr,l,r);
    for(auto num:L1){
        cout<<num<<endl;
    }

    //Deleting Elements
    //1. List.erace(itr)  -is used to delete element on itr position.
    //2. List.erace(str_itr,end_itr) -is used to delete from str_itr to end_itr.
    auto itr_d1=L1.begin();
    auto itr_d2=L1.begin();
    advance(itr_d2,2);
    advance(itr_d1,4);
    //L1.erase(itr_d1);
    L1.erase(itr_d2,itr_d1);
    for(auto num:L1){
        cout<<num<<endl;
    }
    return 0;
}