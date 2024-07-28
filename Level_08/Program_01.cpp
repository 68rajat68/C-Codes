// A Program to learn class, objects, Types of Constructor and Destructor.

#include<bits/stdc++.h>
using namespace std;

class fruit{
    public:
    string name;
    string color;
    //Constructor

    //1. Default Constructor -> In this no argument passed
    fruit(){
        name="NAME";
        color="COLOR";
    }

    //2. Parameterised constructor -> Tn this we have to pass arguments
    fruit(string x,string y){
        name=x;
        color=y;
    }

    //3. Copy constructor -> Used to initalise an object by another existing objects.
    fruit(fruit& A){
        name=A.name;
        color=A.color;
    }

    //Destructor
    ~fruit(){
        cout<<"Destructor is called."<<endl;
    }
};

int main(){
    fruit apple; //Objects
    apple.name="Apple";
    apple.color="Red";
    cout<<apple.name<<" "<<apple.color<<endl;

    fruit *mango= new fruit();
    mango->name="Mango";
    mango->color="Yellow";
    cout<<mango->name<<" "<<mango->color<<endl;
    delete mango; //we can delete this anywhere as we want

    //Constructor _ Calls
    //1
    fruit First;
    cout<<First.name<<" "<<First.color<<endl;
    //2
    fruit Second("rajat","white");
    cout<<Second.name<<" "<<Second.color<<endl;
    //3
    fruit Third=apple;
    cout<<Third.name<<" "<<Third.color<<endl;
    return 0;
}