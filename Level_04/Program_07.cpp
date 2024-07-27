// A Program to find n to the power r using recursion only.

#include<bits/stdc++.h>
using namespace std;
//Method_01
int F(int n,int r){
    if(r==1) return n;
    return (n*F(n,(r-1)));
}
//Method_02
int f(int n,int r){
    if(r==1) return n;
    if(r%2==0) return (pow(f(n,r/2),2));
    if(r%2==1) return (n*pow(f(n,(r-1)/2),2));
}
int main(){
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r also : ";
    cin>>r;
    if(r==0){
        cout<<"We have "<< n <<" power " << r<<" is : 1";
    }else{
    int Ans=f(n,r);
    cout<<"We have "<< n <<" power " << r<<" is : "<<Ans;
    }
    return 0;
}