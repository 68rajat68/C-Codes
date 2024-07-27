//A Program to sort given array by count sort only.

#include<bits/stdc++.h>

using namespace std;

void countSort(int A[],int n){
    int Max=A[0];
    for(int i=1;i<(n);i++){
        if(Max<A[i]) Max=A[i];
    }
    vector <int> C(Max+1,0);
    for(int i=0;i<n;i++){
        C[A[i]]++;
    }
    for(int i=1;i<=Max;i++){
        C[i]+=C[i-1];
    }
    vector<int> ans(n);
    for(int i=(n-1);i>=0;i--){
        ans[--C[A[i]]]=A[i];
    }
    for(int i=0;i<n;i++){
        A[i]=ans[i];
    }
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter Elements: ";
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    countSort(A,n);
    cout<<"After Sorting we get :";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";

    }
    return 0;
}