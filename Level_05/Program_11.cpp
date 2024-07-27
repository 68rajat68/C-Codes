// A Program to merge given two sorted array into sorted array.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter length's of two arrays: ";
    cin>>n1>>n2;
    int A[n1],B[n2];
    cout<<"Enter elements of the first array:" ;
    for(int i=0;i<n1;i++){
        cin>>A[i];
    }
    cout<<"Enter elements of the second array :";
    for(int j=0;j<n2;j++){
        cin>>B[j];
    }
    int Ans[(n1+n2)];
    int i=0,j=0;
    int k=0;
    while(i<n1 && j<n2){
        if(A[i]<B[j]){
            Ans[k++]=A[i++];
        }else if(A[i]>B[j]){
            Ans[k++]=B[j++];
        }
    }
    while(i<n1){
        Ans[k++]=A[i++];
    }
    while(j<n2){
        Ans[k++]=B[j++];
    }
    cout<<"After merging both the given array we get : ";
    for(int i=0;i<(n1+n2);i++){
        cout<<Ans[i]<<" ";
    }
    return 0;
}