/*
for n=5;

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
 ABCDCBA
  ABCBA
   ABA
    A   
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }   
        for(int j=1;j<=i;j++){
            cout<<char(64+j);
        }
        for(int j=(i-1);j>=1;j--){
            cout<<char(64+j);
        }
        cout<<endl;
     }
     for(int i=(n-1);i>=1;i--){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }   
        for(int j=1;j<=i;j++){
            cout<<char(64+j);
        }
        for(int j=(i-1);j>=1;j--){
            cout<<char(64+j);
        }
        cout<<endl;
     }

}