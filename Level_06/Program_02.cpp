// A Program to find first occurence of the target.

#include<bits/stdc++.h>
using namespace std;

void binaryFirstSearch(int A[],int n,int T,int &Ans){
    int lo=0;
    int hi=(n-1);
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(A[mid]==T){
            Ans=mid;
            hi=mid-1;
        }else if(A[mid]<T){
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }
    return;
}

int main(){
    int n,T;
    cout<<"Enter n: ";
    cin>>n;
    int A[n];
    cout<<"Enter elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter Target : ";
    cin>>T;
    int Ans=(-1);
    binaryFirstSearch(A,n,T,Ans);
    cout<<"First Occrence of the target is: "<<Ans;
    return 0;
}