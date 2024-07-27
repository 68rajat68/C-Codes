// A Program to find matrix multiplication.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int r1,c1,r2,c2;
    cout<<"Enter order of the first matrix : ";
    cin>>r1>>c1;
    int A[r1][c1];
    cout<<"Enter elements of the first matrix : ";
    for (int i = 0; i < r1; i++)
    {
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter order of the second matrix : ";
    cin>>r2>>c2;
    int B[r2][c2];
    cout<<"Enter elements of the second matrix : ";
    for (int i = 0; i < r2; i++)
    {
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
    }
    if(r2!=c1){
        cout<<"Matrix multiplication is not possible in this case. ";
    }else {
    int C[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            C[i][j]=0;
            for(int k=0;k<c1;k++){
                C[i][j]+=(A[i][k]*B[k][j]);
            }
        }
    }
    cout<<"Matrix multiplication is given by C:\n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}   
}