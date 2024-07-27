// A Program to fing GCD of given two number by recursion.

#include<bits/stdc++.h>
using namespace std;

int F(int n,int m){
    if(m==0) return n;
    int r=n%m;
    return F(m,r);
}

int main(){
    int n,m;
    cout<<"Enter two number N and M :";
    cin>>n>>m;
    int gcd;
    if(n>m){
    gcd=F(n,m);
    }else gcd=F(m,n);
    cout<<"GCD of given numbers : "<<gcd;
    return 0;
}