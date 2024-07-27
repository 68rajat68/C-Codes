/*
for n=7;

*******
**   **
* * * *
*  *  *
* * * *
**   **
*******


*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || j==n || i==1 || i==n || i==j || (i+j)==8){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}