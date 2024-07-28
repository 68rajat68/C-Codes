//Polymorphism   i.e. Ability of objects/methods to take different forms.
//1. Compile Time Polymorphism
  // Function Overloading Ans Operator OverLoading
//2. RunTime Polymorphism
  // Function Overriding

#include<bits/stdc++.h>
using namespace std;

class Sum{
    public:
    void add(int x,int y){
        int ans=x+y;
        cout<<"Ans "<<ans<<endl;
    }
    void add(int x,int y,int z){
        int ans=x+y+z;
        cout<<"Ans "<<ans<<endl;
    }
    void add(float x,float y){
        float ans=x+y;
        cout<<"Ans "<<ans<<endl;
    }
};

//Operator Overloading
class Complex{
public:

    int real;
    int img;
    Complex(int x,int y){
        real=x;
        img=y;
    }

    Complex operator+(Complex &c){
        Complex ans(0,0);
        ans.real=real+c.real;
        ans.img=img+c.img;
        return ans;
    }
};

//Function Overriding
class parent{
    public:
    virtual void print(){
        cout<<"parent class "<<endl;
    }
    void show(){
        cout<<"parent Class "<<endl;
    }
};

class child:public parent{
    public:
    void print(){
        cout<<"child class "<<endl;
    }
    void show(){
        cout<<"child Class "<<endl;
    }
};

int main(){
    Sum A;
    A.add(1,2);
    A.add(1,2,3);
    A.add(float(1.5),float(1.5));

    Complex B(1,3);
    Complex C(2,4); 
    Complex D=B+C;
    cout<<D.real<<" "<<D.img<<endl;
    parent *P;
    child c;
    P=&c;
    P->print();
    P->show();
    return 0; 
}