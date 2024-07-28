// A Program to learn encapsulation,Inheritance
//Abstraction is followed in OOP eg. pow(x,y) is used to find x^y but how that is not shown to us

#include<bits/stdc++.h>
using namespace std;

class C1{
    int n;
    public:
    //encapsulation
    int get(){
        return n;
    }
    void set(int x){
        n=x;
    }
};
//Inheritance 

class parent{
    public: 
    parent(){
        cout<<"Parent Class"<<endl;
    }
    int x;
    protected:
    int y;
    private:
    int z;
};
//1. Public
class child1:public parent {
    public: 
    child1(){
        cout<<"child class"<<endl;
    }
    //x will remain public
    //y will be protected
    //z will not be accessible

};
//Multi_Level_Inheritance
class grandchild1:public child1{
    public:
    grandchild1(){
        cout<<"GrandChild Class"<<endl;
    }
};
//2. private
class child2:private parent{
    //x will be private 
    //y will be private 
    //z will not be accessible

};
//3. protected
class child3:protected parent{
    //x will be protected
    //y will be protected
    //z will not be accessible
};
//Multiple Inheritance
class parent1{
    public: 
    parent1(){
        cout<<"Parent1 Class"<<endl;
    }
};
class parent2{
    public: 
    parent2(){
        cout<<"Parent2 Class"<<endl;
    }
};
class childMulti:public parent1,public parent2{
    public:
    childMulti(){
        cout<<"Multiple Inheritance Child class ";
    }
};
//-->> Hierarchilcal Inheritance i.e. one parent class with multiple child class.
//-->> Hybrid Inheritance i.e. Combination of more then one Inheritance types.

int main(){
    C1 obj1;
    //encapsulation
    obj1.set(99);
    cout<<obj1.get()<<endl;
    //Single Inheritance
    childMulti A;
    return 0;  
}