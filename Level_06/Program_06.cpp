// A Program to find the target in the given rotated sorted array.

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int A[],int n,int T){
    int lo=0;
    int hi=(n-1);
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(A[mid]==T) return mid;
        if(A[mid] >= A[lo]){
            if(T>=A[lo] && T<=A[mid]){
                hi=mid-1;
            }else {
                lo=mid+1;
            }
        }else{
            if(T>=A[mid] && T<=A[hi]){
                lo=mid+1;
            }else {
                hi=mid-1;
            }
        }
    }
    return (-1);
}

int main(){
    int n,T;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter elements: ";
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter Target : ";
    cin>>T;
    int idx=binarySearch(A,n,T);
    if(idx==(-1)){
        cout<<"Not Present in the given array.";
    }else{
        cout<<"Target element is present at "<<idx<<" index in the given array";
    }
    return 0;
}