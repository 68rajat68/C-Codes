//A Program to sort given array by using Insertion Sorting algorithm.

#include<bits/stdc++.h>
using namespace std;

void insertionSort(int n,vector<int> &A){
    for(int i=1;i<(n);i++){
        int New=A[i];
        int k;
        for(int j=(i-1);j>=0;j--){
            if(A[j]>New){
                A[j+1]=A[j];
                k=j;
            }
        }
        A[k]=New;
        /*int j=(i-1);
        while(j>=0 && A[j]>New){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=New;*/
    }
}
// 2 4 5 6 3
int main(){
    int n;
    cout<<"Enter length of the array: ";
    cin>>n;
    vector <int> A(n);
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    insertionSort(n,A);
    cout<<"Given array in sorted form : ";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}