//A Program to sort given array by using merge sorting algorithm.

#include<bits/stdc++.h>
using namespace std;

void merge(int A[],int l,int mid,int r){
    int al=(mid-l+1);
    int bl=(r-mid);
    int A1[al],A2[bl];
    for(int i=0;i<al;i++){
        A1[i]=A[l+i];
    }
    for(int i=0;i<bl;i++){
        A2[i]=A[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<al && j<bl){
        if(A1[i]<A2[j]){
            A[l++]=A1[i++];
        }else{
            A[l++]=A2[j++];
        }
    }
    while(i<al){
        A[l++]=A1[i++];
    }
    while(j<bl){
        A[l++]=A2[j++];
    }
}

void mergeSort(int A[],int l,int r){
    if(l>=r){
        return;
    } 
    int mid=(r+l)/2;
    mergeSort(A,l,mid);
    mergeSort(A,mid+1,r);
    merge(A,l,mid,r);
}

int main(){
    int n;
    cout<<"Enter length of the array :";
    cin>>n;
    int Arr[n];
    cout<<"Enter elements of the array :" ;
    for(int i=0;i<n;i++){
        cin>>Arr[i];
    }
    mergeSort(Arr,0,(n-1));
    cout<<"Sorted array is :" ;
    for(int i=0;i<n;i++){
        cout<<Arr[i]<<" ";
    }
    return 0;
}