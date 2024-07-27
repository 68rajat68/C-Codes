//A Program to print increasing sequance upto n without using any loop.

#include<bits/stdc++.h>
using namespace std;

void F(int n){
    if(n==1){
        cout<<n<<" ";
        return ;
    } 
    F(n-1);
    cout<<n<<" ";
    return;
}
int main(){
    int n;
    cout<<"Enter any n: ";
    cin>>n;
    F(n);
    return 0;
}