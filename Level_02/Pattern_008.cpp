/*
for n=5;
  *
  *
*****
  *
  * 
  
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==(n+1)/2) cout<<"*";
            else {
                if(j==(n+1)/2) cout<<"*";
                else cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}