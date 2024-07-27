// A Program to find peak element in the given mountain array.

#include<bits/stdc++.h>
using namespace std;

int binarySearchPeak(int A[],int n){
    int lo=0;
    int hi=(n-1);
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(mid==0){
            if(A[mid]>A[mid+1]){
                return 0;
            }else{
                return 1;
            }
        }else if(mid==(n-1)){
            if(A[mid]>A[mid-1]){
                return (n-1);
            }else{
                return (n-2);
            }
        }else{
        if(A[mid-1]<A[mid]  && A[mid]>A[mid+1]){
            return mid;
        }else if(A[mid]<A[mid+1]){
            lo=mid+1;
        }else{
            hi=mid-1;
        }
        }
    }
    return (-1);
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter elements : ";
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int Ans=binarySearchPeak(A,n);
    cout<<"Peak element is present at "<<Ans<<" index in the given Mountain array";
    return 0;
}