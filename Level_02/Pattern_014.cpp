/*
for n=9;
right arrow
    *
     *
      *
       * 
*********
       * 
      *
     *
    *

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=((n-1)/2);i++){
        for(int j=1;j<=i+(n/2);j++){
            if(j==(i+(n/2))) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=((n-1)/2);i>=1;i--){
        for(int j=1;j<=i+(n/2);j++){
            if(j==(i+(n/2))) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}