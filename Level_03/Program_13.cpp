// To find the transpose of the given matrix.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter order of the matrix: ";
    cin>>r>>c;
    int A[r][c];
    cout<<"Enter elements of the matrix: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Given matrix is: \n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    if(r==c){
    for(int i=0;i<r;i++){
        for(int j=0;j<i;j++){
            swap(A[i][j],A[j][i]);
        }
    }
    cout<<"Transpose of the given matrix is:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    }else{
        int Ans[c][r];
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                Ans[i][j]=A[j][i];
            }
        }
        cout<<"Transpose of the given matrix is:\n";
        for(int i=0;i<c;i++){
        for(int j=0;j<r;j++)
        {
            cout<<Ans[i][j]<<" ";
        }
        cout<<endl;
        }
    }    
    for(int i=0;i<c;i++){
        for(int j=0;j<i;j++){
            swap(A[i][j],A[j][i]);
        }
    }
    cout<<"Transpose of the given matrix is:\n";
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}