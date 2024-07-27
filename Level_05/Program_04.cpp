// A Program to shift all the zero elements in the end of the given array.

#include<bits/stdc++.h>
using namespace std;

void F(vector<int> &A,int n){
    for(int i=0;i<(n-1);i++){
        for(int j=(i+1);j<n;j++){
            if(A[i]==0){
                if(A[j]!=0){
                    swap(A[i],A[j]);
                }
            }
        }
    }
    return ;
}

void f(vector<int> &A,int n){
    for(int i=(n-1);i>0;i--){
        int j=0;
        while(j!=i){
            if(A[j]==0 && A[j+1]!=0){
                swap(A[j],A[j+1]);
            }
            j++;
        }
    }
    return ;
}

int main(){
    int n;
    cout<<"Enter length of the array : ";
    cin>>n;
    cout<<"Enter elements of the array: ";
    vector <int> A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    f(A,n);
    cout<<"After moving all zero elements to the end of the array we get : ";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}