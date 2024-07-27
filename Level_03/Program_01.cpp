// Reverse the given number.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int m,digit=0;
    m=n;
    while(m>0){
        m/=10;
        digit++;
    }
    cout<<"No. of digits is : "<<digit;
    int r,New=0;
    while(n>0){
        r=n%10;
        digit--;
        New=New + (r*(pow(10,digit)));
        n/=10; 
    }
    cout<<"\nRequired number is : "<<New;
    return 0 ;
}