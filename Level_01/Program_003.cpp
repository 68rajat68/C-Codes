#include<iostream>

using namespace std;

void method_01(int num1){
    cout<<"Hello you entered "<<num1<<" as input";
}

class nameclass{
   public:
   nameclass(){
    cout<<"Hello World";
   }
    nameclass(int a){
        cout<<"Hello"<<a;
    }
};

class child : public nameclass{
  public:
    child(int b){
        cout<<"I am Child";
    }
};

int main(){
    int num1;
    cout<<"Enter your number: ";
    cin>>num1;
    // cout<<"Your entered number: "<<num1;
    method_01(num1);
    child obj(10);

    return 0;
}