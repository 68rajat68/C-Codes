//A Program to print given array using recursion.

#include<bits/stdc++.h>
using namespace std;

void F(int *array,int n,int m){
    if(n==m) return;
    cout<<array[n]<<" ";
    F(array,(n+1),m);
}
int main(){
    int n;
    cout<<"Enter lenght of the array : ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    F(array,0,n);
    return 0;
}