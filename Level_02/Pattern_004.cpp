/*
For n=4,m=6

121212
212121
121212
212121

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter m: ";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0)){
                cout<<"1";
            }
            else cout<<"2";
        }
        cout<<endl;
    }
}