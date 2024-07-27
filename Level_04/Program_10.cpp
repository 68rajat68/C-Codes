// A Program to find sum of the all elements of the given array by recursion.

#include<bits/stdc++.h>
using namespace std;

int F(int *A,int idx,int n){
    if(idx==(n-1)) return A[idx];
    return (A[idx]+F(A,idx+1,n));
}
int main(){
    int n;
    cout<<"Enter length of the array: ";
    cin>>n;
    cout<<"Enter elements of the array: ";
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int Ans=F(A,0,n);
    cout<<"Sum of the all elements of the given array is : "<<Ans;
    return 0;
}