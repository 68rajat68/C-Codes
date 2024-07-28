//Diamond Problem  i.e. Base class has multiple parent classes having a common ancestor class.

#include<bits/stdc++.h>
using namespace std;

class parent{
    public:
    parent(){
        cout<<"Parent Class"<<endl;
    }
};

class child1:public parent{
    public:
    child1(){
        cout<<"Child1 Class"<<endl;
    }
};

class child2:public parent{
    public:
    child2(){
        cout<<"Child2 Class"<<endl;
    }
};

class grandchild:public child1,public child2{
    public:
    grandchild(){
        cout<<"Grandchild Class"<<endl;
    }
};
int main(){
    grandchild A;
    return 0;
}

//In this Parent class is called two times.
//This is know as diamond problem.
