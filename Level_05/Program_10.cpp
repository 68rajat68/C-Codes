//A Program to find k th smallest element by using quick sort in the given array.

#include<bits/stdc++.h>
using namespace std;

int partition(int A[],int l,int r){
    int Pi=A[r];
    int i=l;
    for(int j=l;j<r;j++){
        if(A[j]<Pi){
            swap(A[i],A[j]);
            i++;
        }
    }
    swap(A[i],A[r]);
    return i;
}

int kthSmallest(int A[],int l,int r,int k){
    if(k>0 && k<=(r-l+1)){
        int Pos=partition(A,l,r);
        if((Pos-l)==(k-1)) return A[Pos];
        else if((Pos-l)>(k-1)){
            return kthSmallest(A,l,Pos-1,k);
        }
        else{
            return kthSmallest(A,Pos+1,r,(k-Pos+l-1));
        }
    }
    cout<<"Error";
    return INT_MAX;
}

int main(){
    int n,k;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter elements of the array: ";
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"K : ";
    cin>>k;
    int Ans=kthSmallest(A,0,(n-1),k);
    cout<<k<<" th Smallest element in the given array is :"<<Ans;
    return 0;
}