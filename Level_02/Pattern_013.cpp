/*
for n =9;

    *
   ***
  * * *
 *  *  *
*********
 *  *  *
  * * *
   ***
    *  

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=(n+1)/2;i++){
        for(int j=1;j<=((n+1)/2)-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            if(j==1 || j==(2*i-1) || j==(i) || i==(n+1)/2) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    for(int i=(n-1)/2;i>=1;i--){
        for(int j=1;j<=((n+1)/2)-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            if(j==1 || j==(2*i-1) || j==(i)) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}