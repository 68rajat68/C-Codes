// A Program to check that target is present in the given rotated sorted array in which elements can be repated.

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int A[],int n,int T){
    int lo=0;
    int hi=(n-1);
    if(A[lo]==T) return 1;
    while(A[lo]==A[hi]){
        lo++;
        hi--;
    }
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(A[mid]==T) return 1;
        if(A[mid]>=A[lo]){
            if(T>=A[lo] && T<=A[mid]){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }else {
            if(T<=A[hi] && T>=A[mid]){
                lo=mid+1;
            }else{
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
    int A[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter target :";
    cin>>T;
    int Ans=binarySearch(A,n,T);
    if(Ans==1){
        cout<<"Target is present in the given array.";
    }else cout<<"Target is not present in the given array.";
    return 0;
}