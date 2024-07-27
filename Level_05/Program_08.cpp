// A Program to sort given array by radix sort.

#include<bits/stdc++.h>
using namespace std;

void countSort(int A[],int n,int pos){
    vector <int> B(10,0);
    for(int i=0;i<n;i++){
        B[(A[i]/pos)%10]++;
    }
    for(int i=1;i<10;i++){
        B[i]+=B[(i-1)];
    }
    vector <int> Ans(n);
    for(int i=(n-1);i>=0;i--){
        Ans[--B[(A[i]/pos)%10]]=A[i];
    }
    for(int i=0;i<n;i++){
        A[i]=Ans[i];
    }
}

void radixSort(int A[],int n){
    int Max=A[0];
    for(int i=1;i<n;i++){
        if(Max<A[i]) Max=A[i];
    }

    for(int pos=1; (Max/pos)>0;pos*=10){
        countSort(A,n,pos);
    }
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
    radixSort(A,n);
    cout<<"After sorting we get : ";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}