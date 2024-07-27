// A Program to find sum of first n terms with alternate sign.

#include<bits/stdc++.h>
using namespace std;

int F(int n){
    if(n==0) return 0;
    return (F(n-1)+((n%2==0)?(-n):(n)));
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int Sum=F(n);
    cout<<"Sum :"<<Sum;
    return 0;
}