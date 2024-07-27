// A Program to find minimum elements in the given rotated Sorted array.

#include<bits/stdc++.h>
using namespace std;

int findMinimumIdx(int A[],int n){
    if(n==1) return 0;
    int lo=0;int hi=(n-1);
    if(A[lo]<A[hi]) return lo;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(A[mid]>A[mid+1]) return mid+1;
        if(A[mid]<A[mid-1]) return mid;
        if(A[mid]>A[lo]){
            lo=mid+1;
        }else {
            hi=mid-1;
        }
    }
    return (-1);
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter elements : ";
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int idx=findMinimumIdx(A,n);
    cout<<"Minimum element is on "<<idx<<" index in the given array.";
    return 0;
}