/*
for n=4;

   1
  2 2
 3   3
4444444

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
        for(int j=1;j<=(2*i-1);j++){
            if(j==1 || j==(2*i-1) || i==1 || i==n){
                cout<<i;
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}