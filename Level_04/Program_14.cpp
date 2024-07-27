// A Program to print k multiples of given number n.

#include<bits/stdc++.h>
using namespace std;

void F(int n,int k){
    if(k<=0) return;
    F(n,(k-1));
    cout<<n*k<<" ";
    return;
}

int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    int k;
    cout<<"Enter value of k: ";
    cin>>k;
    F(n,k);
    return 0;
}