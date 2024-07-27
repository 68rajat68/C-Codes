//A Program to sort the given array.(using selection sort).

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter length of the given array: ";
    cin>>n;
    int A[n];
    cout<<"Enter elements of the array :";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    //Selection Sort

    for(int i=0;i<n-1;i++){
        int Min_Idx=i;
        for(int j=(i+1);j<n;j++){
            if(A[Min_Idx]>A[j]) Min_Idx=j;
        }
       if(Min_Idx!=i) swap(A[i],A[Min_Idx]);
    }
    cout<<"Sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
