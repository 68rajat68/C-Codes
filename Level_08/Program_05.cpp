// A Program to learn friend function.

#include<bits/stdc++.h>
using namespace std;

class A{
    private: int x;
    private: int y=10;
    public:
    A (int y){
        x=y;
    }
    friend void print(A &obj);
};

void print(A &obj){
    cout<<obj.x<<endl;
    cout<<obj.y<<endl;
}

int main(){
    A obj(5);
   // cout<<obj.x<<endl;
   print (obj);
    return 0;
}