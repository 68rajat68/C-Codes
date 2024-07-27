//A Program to print pascel's triangle

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter upto how many lines you need pascel's triangle : ";
    cin>>n;
    int A[n][n];
    for(int i=1;i<=n;i++){
        for(int k=0;k<(n-i);k++){
                cout<<" ";
            }
        for(int j=0;j<i;j++){
            if(j==0 || j==(i-1)){
                A[i][j]=1;
            }else {
                A[i][j]=A[(i-1)][j]+A[(i-1)][(j-1)];
            }
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}