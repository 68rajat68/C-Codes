//A Program to find x in the given array.

#include<bits/stdc++.h>
using namespace std;

bool F(int *A,int idx,int n,int x){
    if(idx==n) return false ;
    return ((A[idx]==x) || F(A,idx+1,n,x));
}

int main(){
    int n;
    cout<<"Enter length of the given array: ";
    cin>>n;
    cout<<"Enter elements : ";
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int x;
    cout<<"Enter x:";
    cin>>x;
    bool Ans=F(array,0,n,x);
    if(Ans) cout<<"Yes";
    else cout<<"No";
    return 0;
}
