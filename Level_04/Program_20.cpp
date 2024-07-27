//A Program to find sum of all subsets of the given array.

#include<bits/stdc++.h>
using namespace std;

void F(int *A,int n,int idx,int Sum,vector<int> &result){
    if(idx==n) {
        result.push_back(Sum);
        return ;
    }
    F(A,n,idx+1,Sum+A[idx],result);
    F(A,n,idx+1,Sum,result);
}

int main(){
    int n;
    cout<<"Enter length of the array : ";
    cin>>n;
    int array[n];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int Sum=0;
    vector <int> result;
    F(array,n,0,Sum,result);
    cout<<"Sum of all subsets are : \n";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}