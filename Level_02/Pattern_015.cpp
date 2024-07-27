/*
rhombus , hollow rhombus 
for n=4;
   ****
  ****
 ****
****
AND 
   ****
  *  *
 *  *
****      
 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            if(j==1 || j==n || i==1 || i==n) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}